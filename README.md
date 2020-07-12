# 1-Dimensional-Kalman-Filter
In control theory, Kalman filtering is an a  is an algorithm that uses a series of measurements observed over time, containing statistical noise and other inaccuracies, and produces estimates of unknown variables that tend to be more accurate than those based on a single measurement alone, by estimating a joint probability distribution over the variables for each timeframe.

A Gaussian distribution (bell curve) is a probability distribution, which is a continuous function. The probability that a random variable, x, will take a value between x_1 and x_2. Using a known mean (μ) and variance (σ²) the follwing Gussian Solver will comute this random variable's probability of being in the bell curve

The Gaussian distribution represents the follwing, in terms of robotics: 
- Predicted Motion
- Sensor Measurement
- Estimated State of Robot

Using 1D_Gaussian_Solver.cpp, measurement_update.cpp, and state_update.cpp files to implment a 1-Dimensional Kalman Filter.
