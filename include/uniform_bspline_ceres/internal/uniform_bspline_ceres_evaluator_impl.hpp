#pragma once

/**
 * @file
 * Definitions used for constexpr variables. This is only need for code pre C++17.
 */
#if not defined(__cplusplus) or __cplusplus < 201703L

namespace ubs {

template <typename Spline_>
constexpr int UniformBSplineCeresEvaluator<Spline_>::Degree;

template <typename Spline_>
constexpr int UniformBSplineCeresEvaluator<Spline_>::Order;

template <typename Spline_>
constexpr int UniformBSplineCeresEvaluator<Spline_>::InputDims;

template <typename Spline_>
constexpr int UniformBSplineCeresEvaluator<Spline_>::OutputDims;

template <typename Spline_>
constexpr int UniformBSplineCeresEvaluator<Spline_>::ControlPointsSupport;

} // namespace ubs

#endif
