# CHANGELOG

ADD: `allow_heat` field to Control model
ADD: `allow_water` field to Control model

## 1.3.0
ADD: SavedRegimes model and serializer
ADD: RegimeId model and serializer
REMOVE: RegimeName
MODIFY: Regime now contains RegimeId model
MODIFY: Replaced RegimeName model with `name` key in Regime 

## 1.2.0
MODIFY: `SensorData` now inherits `RegimeValue`
ADD: Models and serializers:
	- Regimes
	- Regime
	- RegimeValue
	- RegimeName
REMOVE: Models and serializers:
	- RegimeRange
	- RegimeProperty
	- CustomRegime
	- TerrariumData

## 1.1.4
- ADD: MoisturePercentage parameter in Control
- ADD: Temperature parameter in Control

## 1.1.3
- MODIFY: Downgraded to Qt5

## 1.1.2
- ADD: SensorData model and serializer
- ADD: currentMode parameter in TerrariumData model and serializer
- REMOVE: apps subdirectory

## 1.0.1
- ADD: This library now gets fetched into `_deps` folder of build

## 1.0.0
- ADD: Google tests for serializers
- ADD: CMake structure
- ADD: Models and serializers:
    - Control
    - RegimeRange
    - RegimeProperty
    - CustomRegime
    - TerrariumData
