import numpy as np
import skfuzzy as fuzz
from skfuzzy import control as ctrl

# INPUT VARIABLES

food = ctrl.Antecedent(np.arange(1, 5, 1), 'food')
weight = ctrl.Antecedent(np.arange(0, 5.1, 0.1), 'weight')
crispiness = ctrl.Antecedent(np.arange(0, 10.1, 0.1), 'crispiness')
mode = ctrl.Antecedent(np.arange(1, 4, 1), 'mode')

# OUTPUT VARIABLE
intensity = ctrl.Consequent(np.arange(0, 101, 1), 'intensity')

# -----------------------------
# MEMBERSHIP FUNCTIONS
# -----------------------------

# FOOD TYPE
food['pastry'] = fuzz.trimf(food.universe, [1, 1, 2])
food['meat'] = fuzz.trimf(food.universe, [1, 2, 3])
food['pizza'] = fuzz.trimf(food.universe, [2, 3, 4])
food['vegetables'] = fuzz.trimf(food.universe, [3, 4, 4])

# WEIGHT
weight['light'] = fuzz.trimf(weight.universe, [0, 0, 2])
weight['medium'] = fuzz.trimf(weight.universe, [1, 2.5, 4])
weight['heavy'] = fuzz.trimf(weight.universe, [3, 5, 5])

# CRISPINESS
crispiness['low'] = fuzz.trimf(crispiness.universe, [0, 0, 4])
crispiness['medium'] = fuzz.trimf(crispiness.universe, [3, 5, 7])
crispiness['high'] = fuzz.trimf(crispiness.universe, [6, 10, 10])

# COOKING MODE
mode['grill'] = fuzz.trimf(mode.universe, [1, 1, 2])
mode['bake'] = fuzz.trimf(mode.universe, [1, 2, 3])
mode['steam'] = fuzz.trimf(mode.universe, [2, 3, 3])

# OUTPUT INTENSITY
intensity['low'] = fuzz.trimf(intensity.universe, [0, 0, 40])
intensity['medium'] = fuzz.trimf(intensity.universe, [30, 50, 70])
intensity['high'] = fuzz.trimf(intensity.universe, [60, 100, 100])

# -----------------------------
# RULES
# -----------------------------

rule1 = ctrl.Rule(
    food['meat'] &
    weight['heavy'] &
    mode['grill'],
    intensity['high']
)

rule2 = ctrl.Rule(
    food['pastry'] &
    crispiness['low'] &
    mode['bake'],
    intensity['low']
)

rule3 = ctrl.Rule(
    food['vegetables'] &
    mode['steam'],
    intensity['low']
)

rule4 = ctrl.Rule(
    weight['medium'] &
    crispiness['medium'],
    intensity['medium']
)

rule5 = ctrl.Rule(
    food['pizza'] &
    crispiness['high'] &
    mode['bake'],
    intensity['high']
)

# DEFAULT RULE
default_rule = ctrl.Rule(
    weight['light'] | weight['medium'] | weight['heavy'],
    intensity['medium']
)

# -----------------------------
# CONTROL SYSTEM
# -----------------------------

oven_ctrl = ctrl.ControlSystem([
    rule1,
    rule2,
    rule3,
    rule4,
    rule5,
    default_rule
])

oven = ctrl.ControlSystemSimulation(oven_ctrl)

# -----------------------------
# INPUT VALUES
# -----------------------------

food_input = 1
weight_input = 3.0
crispiness_input = 5
mode_input = 1

oven.input['food'] = food_input
oven.input['weight'] = weight_input
oven.input['crispiness'] = crispiness_input
oven.input['mode'] = mode_input

# -----------------------------
# COMPUTE
# -----------------------------

oven.compute()

# -----------------------------
# CATEGORY DETECTION
# -----------------------------

# Food Type
if food_input == 1:
    food_name = "Pastry"
elif food_input == 2:
    food_name = "Meat"
elif food_input == 3:
    food_name = "Pizza"
else:
    food_name = "Vegetables"

# Weight Category
if weight_input < 2:
    weight_name = "Light"
elif weight_input < 4:
    weight_name = "Medium"
else:
    weight_name = "Heavy"

# Crispiness Category
if crispiness_input < 4:
    crisp_name = "Low"
elif crispiness_input < 7:
    crisp_name = "Medium"
else:
    crisp_name = "High"

# Cooking Mode
if mode_input == 1:
    mode_name = "Grill"
elif mode_input == 2:
    mode_name = "Bake"
else:
    mode_name = "Steam"

# -----------------------------
# OUTPUT
# -----------------------------

result = oven.output['intensity']

print("\n--- Result ---")
print("Food Type:", food_name)
print("Weight Category:", weight_name)
print("Crispiness Category:", crisp_name)
print("Cooking Mode:", mode_name)
print(f"Cooking Intensity = {result:.4f} % power")

# -----------------------------
# SHOW GRAPHS
# -----------------------------

weight.view()
crispiness.view()
mode.view()
intensity.view(sim=oven)