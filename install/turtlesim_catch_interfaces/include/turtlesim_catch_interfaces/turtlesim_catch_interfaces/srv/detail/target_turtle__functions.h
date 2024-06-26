// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtlesim_catch_interfaces:srv/TargetTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__FUNCTIONS_H_
#define TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtlesim_catch_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtlesim_catch_interfaces/srv/detail/target_turtle__struct.h"

/// Initialize srv/TargetTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim_catch_interfaces__srv__TargetTurtle_Request
 * )) before or use
 * turtlesim_catch_interfaces__srv__TargetTurtle_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Request__init(turtlesim_catch_interfaces__srv__TargetTurtle_Request * msg);

/// Finalize srv/TargetTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__srv__TargetTurtle_Request__fini(turtlesim_catch_interfaces__srv__TargetTurtle_Request * msg);

/// Create srv/TargetTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
turtlesim_catch_interfaces__srv__TargetTurtle_Request *
turtlesim_catch_interfaces__srv__TargetTurtle_Request__create();

/// Destroy srv/TargetTurtle message.
/**
 * It calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__srv__TargetTurtle_Request__destroy(turtlesim_catch_interfaces__srv__TargetTurtle_Request * msg);

/// Check for srv/TargetTurtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Request__are_equal(const turtlesim_catch_interfaces__srv__TargetTurtle_Request * lhs, const turtlesim_catch_interfaces__srv__TargetTurtle_Request * rhs);

/// Copy a srv/TargetTurtle message.
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
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Request__copy(
  const turtlesim_catch_interfaces__srv__TargetTurtle_Request * input,
  turtlesim_catch_interfaces__srv__TargetTurtle_Request * output);

/// Initialize array of srv/TargetTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence__init(turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence * array, size_t size);

/// Finalize array of srv/TargetTurtle messages.
/**
 * It calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence__fini(turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence * array);

/// Create array of srv/TargetTurtle messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence *
turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence__create(size_t size);

/// Destroy array of srv/TargetTurtle messages.
/**
 * It calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence__destroy(turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence * array);

/// Check for srv/TargetTurtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence__are_equal(const turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence * lhs, const turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence * rhs);

/// Copy an array of srv/TargetTurtle messages.
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
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence__copy(
  const turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence * input,
  turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence * output);

/// Initialize srv/TargetTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim_catch_interfaces__srv__TargetTurtle_Response
 * )) before or use
 * turtlesim_catch_interfaces__srv__TargetTurtle_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Response__init(turtlesim_catch_interfaces__srv__TargetTurtle_Response * msg);

/// Finalize srv/TargetTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__srv__TargetTurtle_Response__fini(turtlesim_catch_interfaces__srv__TargetTurtle_Response * msg);

/// Create srv/TargetTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
turtlesim_catch_interfaces__srv__TargetTurtle_Response *
turtlesim_catch_interfaces__srv__TargetTurtle_Response__create();

/// Destroy srv/TargetTurtle message.
/**
 * It calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__srv__TargetTurtle_Response__destroy(turtlesim_catch_interfaces__srv__TargetTurtle_Response * msg);

/// Check for srv/TargetTurtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Response__are_equal(const turtlesim_catch_interfaces__srv__TargetTurtle_Response * lhs, const turtlesim_catch_interfaces__srv__TargetTurtle_Response * rhs);

/// Copy a srv/TargetTurtle message.
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
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Response__copy(
  const turtlesim_catch_interfaces__srv__TargetTurtle_Response * input,
  turtlesim_catch_interfaces__srv__TargetTurtle_Response * output);

/// Initialize array of srv/TargetTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence__init(turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence * array, size_t size);

/// Finalize array of srv/TargetTurtle messages.
/**
 * It calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence__fini(turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence * array);

/// Create array of srv/TargetTurtle messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence *
turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence__create(size_t size);

/// Destroy array of srv/TargetTurtle messages.
/**
 * It calls
 * turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence__destroy(turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence * array);

/// Check for srv/TargetTurtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence__are_equal(const turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence * lhs, const turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence * rhs);

/// Copy an array of srv/TargetTurtle messages.
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
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence__copy(
  const turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence * input,
  turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__FUNCTIONS_H_
