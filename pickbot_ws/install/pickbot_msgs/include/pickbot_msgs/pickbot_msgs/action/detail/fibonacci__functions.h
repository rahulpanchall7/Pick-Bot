// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pickbot_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef PICKBOT_MSGS__ACTION__DETAIL__FIBONACCI__FUNCTIONS_H_
#define PICKBOT_MSGS__ACTION__DETAIL__FIBONACCI__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pickbot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pickbot_msgs/action/detail/fibonacci__struct.h"

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pickbot_msgs__action__Fibonacci_Goal
 * )) before or use
 * pickbot_msgs__action__Fibonacci_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Goal__init(pickbot_msgs__action__Fibonacci_Goal * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Goal__fini(pickbot_msgs__action__Fibonacci_Goal * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pickbot_msgs__action__Fibonacci_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_Goal *
pickbot_msgs__action__Fibonacci_Goal__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Goal__destroy(pickbot_msgs__action__Fibonacci_Goal * msg);

/// Check for action/Fibonacci message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Goal__are_equal(const pickbot_msgs__action__Fibonacci_Goal * lhs, const pickbot_msgs__action__Fibonacci_Goal * rhs);

/// Copy a action/Fibonacci message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Goal__copy(
  const pickbot_msgs__action__Fibonacci_Goal * input,
  pickbot_msgs__action__Fibonacci_Goal * output);

/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * pickbot_msgs__action__Fibonacci_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Goal__Sequence__init(pickbot_msgs__action__Fibonacci_Goal__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Goal__Sequence__fini(pickbot_msgs__action__Fibonacci_Goal__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * pickbot_msgs__action__Fibonacci_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_Goal__Sequence *
pickbot_msgs__action__Fibonacci_Goal__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Goal__Sequence__destroy(pickbot_msgs__action__Fibonacci_Goal__Sequence * array);

/// Check for action/Fibonacci message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Goal__Sequence__are_equal(const pickbot_msgs__action__Fibonacci_Goal__Sequence * lhs, const pickbot_msgs__action__Fibonacci_Goal__Sequence * rhs);

/// Copy an array of action/Fibonacci messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Goal__Sequence__copy(
  const pickbot_msgs__action__Fibonacci_Goal__Sequence * input,
  pickbot_msgs__action__Fibonacci_Goal__Sequence * output);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pickbot_msgs__action__Fibonacci_Result
 * )) before or use
 * pickbot_msgs__action__Fibonacci_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Result__init(pickbot_msgs__action__Fibonacci_Result * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Result__fini(pickbot_msgs__action__Fibonacci_Result * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pickbot_msgs__action__Fibonacci_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_Result *
pickbot_msgs__action__Fibonacci_Result__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Result__destroy(pickbot_msgs__action__Fibonacci_Result * msg);

/// Check for action/Fibonacci message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Result__are_equal(const pickbot_msgs__action__Fibonacci_Result * lhs, const pickbot_msgs__action__Fibonacci_Result * rhs);

/// Copy a action/Fibonacci message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Result__copy(
  const pickbot_msgs__action__Fibonacci_Result * input,
  pickbot_msgs__action__Fibonacci_Result * output);

/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * pickbot_msgs__action__Fibonacci_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Result__Sequence__init(pickbot_msgs__action__Fibonacci_Result__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Result__Sequence__fini(pickbot_msgs__action__Fibonacci_Result__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * pickbot_msgs__action__Fibonacci_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_Result__Sequence *
pickbot_msgs__action__Fibonacci_Result__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Result__Sequence__destroy(pickbot_msgs__action__Fibonacci_Result__Sequence * array);

/// Check for action/Fibonacci message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Result__Sequence__are_equal(const pickbot_msgs__action__Fibonacci_Result__Sequence * lhs, const pickbot_msgs__action__Fibonacci_Result__Sequence * rhs);

/// Copy an array of action/Fibonacci messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Result__Sequence__copy(
  const pickbot_msgs__action__Fibonacci_Result__Sequence * input,
  pickbot_msgs__action__Fibonacci_Result__Sequence * output);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pickbot_msgs__action__Fibonacci_Feedback
 * )) before or use
 * pickbot_msgs__action__Fibonacci_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Feedback__init(pickbot_msgs__action__Fibonacci_Feedback * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Feedback__fini(pickbot_msgs__action__Fibonacci_Feedback * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pickbot_msgs__action__Fibonacci_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_Feedback *
pickbot_msgs__action__Fibonacci_Feedback__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Feedback__destroy(pickbot_msgs__action__Fibonacci_Feedback * msg);

/// Check for action/Fibonacci message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Feedback__are_equal(const pickbot_msgs__action__Fibonacci_Feedback * lhs, const pickbot_msgs__action__Fibonacci_Feedback * rhs);

/// Copy a action/Fibonacci message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Feedback__copy(
  const pickbot_msgs__action__Fibonacci_Feedback * input,
  pickbot_msgs__action__Fibonacci_Feedback * output);

/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * pickbot_msgs__action__Fibonacci_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Feedback__Sequence__init(pickbot_msgs__action__Fibonacci_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Feedback__Sequence__fini(pickbot_msgs__action__Fibonacci_Feedback__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * pickbot_msgs__action__Fibonacci_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_Feedback__Sequence *
pickbot_msgs__action__Fibonacci_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_Feedback__Sequence__destroy(pickbot_msgs__action__Fibonacci_Feedback__Sequence * array);

/// Check for action/Fibonacci message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Feedback__Sequence__are_equal(const pickbot_msgs__action__Fibonacci_Feedback__Sequence * lhs, const pickbot_msgs__action__Fibonacci_Feedback__Sequence * rhs);

/// Copy an array of action/Fibonacci messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_Feedback__Sequence__copy(
  const pickbot_msgs__action__Fibonacci_Feedback__Sequence * input,
  pickbot_msgs__action__Fibonacci_Feedback__Sequence * output);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pickbot_msgs__action__Fibonacci_SendGoal_Request
 * )) before or use
 * pickbot_msgs__action__Fibonacci_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Request__init(pickbot_msgs__action__Fibonacci_SendGoal_Request * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_SendGoal_Request__fini(pickbot_msgs__action__Fibonacci_SendGoal_Request * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_SendGoal_Request *
pickbot_msgs__action__Fibonacci_SendGoal_Request__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_SendGoal_Request__destroy(pickbot_msgs__action__Fibonacci_SendGoal_Request * msg);

/// Check for action/Fibonacci message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Request__are_equal(const pickbot_msgs__action__Fibonacci_SendGoal_Request * lhs, const pickbot_msgs__action__Fibonacci_SendGoal_Request * rhs);

/// Copy a action/Fibonacci message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Request__copy(
  const pickbot_msgs__action__Fibonacci_SendGoal_Request * input,
  pickbot_msgs__action__Fibonacci_SendGoal_Request * output);

/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__init(pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__fini(pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence *
pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__destroy(pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * array);

/// Check for action/Fibonacci message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__are_equal(const pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * lhs, const pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Fibonacci messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__copy(
  const pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * input,
  pickbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * output);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pickbot_msgs__action__Fibonacci_SendGoal_Response
 * )) before or use
 * pickbot_msgs__action__Fibonacci_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Response__init(pickbot_msgs__action__Fibonacci_SendGoal_Response * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_SendGoal_Response__fini(pickbot_msgs__action__Fibonacci_SendGoal_Response * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_SendGoal_Response *
pickbot_msgs__action__Fibonacci_SendGoal_Response__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_SendGoal_Response__destroy(pickbot_msgs__action__Fibonacci_SendGoal_Response * msg);

/// Check for action/Fibonacci message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Response__are_equal(const pickbot_msgs__action__Fibonacci_SendGoal_Response * lhs, const pickbot_msgs__action__Fibonacci_SendGoal_Response * rhs);

/// Copy a action/Fibonacci message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Response__copy(
  const pickbot_msgs__action__Fibonacci_SendGoal_Response * input,
  pickbot_msgs__action__Fibonacci_SendGoal_Response * output);

/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__init(pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__fini(pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence *
pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__destroy(pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * array);

/// Check for action/Fibonacci message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__are_equal(const pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * lhs, const pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Fibonacci messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__copy(
  const pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * input,
  pickbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * output);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pickbot_msgs__action__Fibonacci_GetResult_Request
 * )) before or use
 * pickbot_msgs__action__Fibonacci_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Request__init(pickbot_msgs__action__Fibonacci_GetResult_Request * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_GetResult_Request__fini(pickbot_msgs__action__Fibonacci_GetResult_Request * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pickbot_msgs__action__Fibonacci_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_GetResult_Request *
pickbot_msgs__action__Fibonacci_GetResult_Request__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_GetResult_Request__destroy(pickbot_msgs__action__Fibonacci_GetResult_Request * msg);

/// Check for action/Fibonacci message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Request__are_equal(const pickbot_msgs__action__Fibonacci_GetResult_Request * lhs, const pickbot_msgs__action__Fibonacci_GetResult_Request * rhs);

/// Copy a action/Fibonacci message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Request__copy(
  const pickbot_msgs__action__Fibonacci_GetResult_Request * input,
  pickbot_msgs__action__Fibonacci_GetResult_Request * output);

/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * pickbot_msgs__action__Fibonacci_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence__init(pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence__fini(pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence *
pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence__destroy(pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence * array);

/// Check for action/Fibonacci message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence__are_equal(const pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence * lhs, const pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Fibonacci messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence__copy(
  const pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence * input,
  pickbot_msgs__action__Fibonacci_GetResult_Request__Sequence * output);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pickbot_msgs__action__Fibonacci_GetResult_Response
 * )) before or use
 * pickbot_msgs__action__Fibonacci_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Response__init(pickbot_msgs__action__Fibonacci_GetResult_Response * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_GetResult_Response__fini(pickbot_msgs__action__Fibonacci_GetResult_Response * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pickbot_msgs__action__Fibonacci_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_GetResult_Response *
pickbot_msgs__action__Fibonacci_GetResult_Response__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_GetResult_Response__destroy(pickbot_msgs__action__Fibonacci_GetResult_Response * msg);

/// Check for action/Fibonacci message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Response__are_equal(const pickbot_msgs__action__Fibonacci_GetResult_Response * lhs, const pickbot_msgs__action__Fibonacci_GetResult_Response * rhs);

/// Copy a action/Fibonacci message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Response__copy(
  const pickbot_msgs__action__Fibonacci_GetResult_Response * input,
  pickbot_msgs__action__Fibonacci_GetResult_Response * output);

/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * pickbot_msgs__action__Fibonacci_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence__init(pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence__fini(pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence *
pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence__destroy(pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence * array);

/// Check for action/Fibonacci message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence__are_equal(const pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence * lhs, const pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Fibonacci messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence__copy(
  const pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence * input,
  pickbot_msgs__action__Fibonacci_GetResult_Response__Sequence * output);

/// Initialize action/Fibonacci message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pickbot_msgs__action__Fibonacci_FeedbackMessage
 * )) before or use
 * pickbot_msgs__action__Fibonacci_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_FeedbackMessage__init(pickbot_msgs__action__Fibonacci_FeedbackMessage * msg);

/// Finalize action/Fibonacci message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_FeedbackMessage__fini(pickbot_msgs__action__Fibonacci_FeedbackMessage * msg);

/// Create action/Fibonacci message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pickbot_msgs__action__Fibonacci_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_FeedbackMessage *
pickbot_msgs__action__Fibonacci_FeedbackMessage__create();

/// Destroy action/Fibonacci message.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_FeedbackMessage__destroy(pickbot_msgs__action__Fibonacci_FeedbackMessage * msg);

/// Check for action/Fibonacci message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_FeedbackMessage__are_equal(const pickbot_msgs__action__Fibonacci_FeedbackMessage * lhs, const pickbot_msgs__action__Fibonacci_FeedbackMessage * rhs);

/// Copy a action/Fibonacci message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_FeedbackMessage__copy(
  const pickbot_msgs__action__Fibonacci_FeedbackMessage * input,
  pickbot_msgs__action__Fibonacci_FeedbackMessage * output);

/// Initialize array of action/Fibonacci messages.
/**
 * It allocates the memory for the number of elements and calls
 * pickbot_msgs__action__Fibonacci_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__init(pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__fini(pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * array);

/// Create array of action/Fibonacci messages.
/**
 * It allocates the memory for the array and calls
 * pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence *
pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Fibonacci messages.
/**
 * It calls
 * pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
void
pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__destroy(pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * array);

/// Check for action/Fibonacci message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__are_equal(const pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * lhs, const pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Fibonacci messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pickbot_msgs
bool
pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__copy(
  const pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * input,
  pickbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PICKBOT_MSGS__ACTION__DETAIL__FIBONACCI__FUNCTIONS_H_
