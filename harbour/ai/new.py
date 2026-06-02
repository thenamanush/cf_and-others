# Install scikit-fuzzy
import numpy as np
import skfuzzy as fuzz
from skfuzzy import control as ctrl

# -----------------------------
# INPUT VARIABLES
# -----------------------------

# Soil Moisture (0-100)
soil = ctrl.Antecedent(np.arange(0, 101, 1), 'soil')

# Temperature (10-40)
temp = ctrl.Antecedent(np.arange(10, 41, 1), 'temp')

# Crop Type (1-3)
crop = ctrl.Antecedent(np.arange(1, 4, 1), 'crop')

# Rain Forecast (0-100)
rain = ctrl.Antecedent(np.arange(0, 101, 1), 'rain')

# Output: Water Supply
water = ctrl.Consequent(np.arange(0, 101, 1), 'water')

# -----------------------------
# MEMBERSHIP FUNCTIONS
# -----------------------------

# Soil
soil['dry'] = fuzz.trimf(soil.universe, [0, 0, 40])
soil['medium'] = fuzz.trimf(soil.universe, [30, 50, 70])
soil['wet'] = fuzz.trimf(soil.universe, [60, 100, 100])

# Temperature
temp['low'] = fuzz.trimf(temp.universe, [10, 10, 25])
temp['medium'] = fuzz.trimf(temp.universe, [20, 27, 34])
temp['high'] = fuzz.trimf(temp.universe, [30, 40, 40])

# Crop Type
crop['leafy'] = fuzz.trimf(crop.universe, [1, 1, 2])
crop['normal'] = fuzz.trimf(crop.universe, [1, 2, 3])
crop['fruit'] = fuzz.trimf(crop.universe, [2, 3, 3])

# Rain Forecast
rain['low'] = fuzz.trimf(rain.universe, [0, 0, 40])
rain['medium'] = fuzz.trimf(rain.universe, [30, 50, 70])
rain['high'] = fuzz.trimf(rain.universe, [60, 100, 100])

# Water Supply
water['low'] = fuzz.trimf(water.universe, [0, 0, 40])
water['medium'] = fuzz.trimf(water.universe, [30, 50, 70])
water['high'] = fuzz.trimf(water.universe, [60, 100, 100])

# -----------------------------
# RULES
# -----------------------------

# Rule 1:
# If Soil=Dry and Temp=High and Crop=Fruit-bearing -> High
rule1 = ctrl.Rule(
    soil['dry'] & temp['high'] & crop['fruit'],
    water['high']
)

# Rule 2:
# If Soil=Wet or Rain=High -> Low
rule2 = ctrl.Rule(
    soil['wet'] | rain['high'],
    water['low']
)

# Rule 3:
# If Soil=Medium and Temp=Medium and Crop=Leafy -> Medium
rule3 = ctrl.Rule(
    soil['medium'] & temp['medium'] & crop['leafy'],
    water['medium']
)

# -----------------------------
# CONTROL SYSTEM
# -----------------------------

irrigation_ctrl = ctrl.ControlSystem([rule1, rule2, rule3])
irrigation = ctrl.ControlSystemSimulation(irrigation_ctrl)

# -----------------------------
# CRISP INPUT VALUES
# -----------------------------

irrigation.input['soil'] = 35
irrigation.input['temp'] = 32
irrigation.input['crop'] = 3
irrigation.input['rain'] = 10

# -----------------------------
# COMPUTE OUTPUT
# -----------------------------

irrigation.compute()

# -----------------------------
# DISPLAY RESULT
# -----------------------------

print("Smart Irrigation System")
print("------------------------")
print("Soil Moisture = 35%")
print("Temperature = 32°C")
print("Crop Type = Fruit-bearing")
print("Rain Forecast = 10%")

print("\nCrisp Output (Water Supply):")
print(round(irrigation.output['water'], 2), "liters")

# Optional graph
water.view(sim=irrigation)