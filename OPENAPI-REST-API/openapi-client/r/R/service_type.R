#' Create a new ServiceType
#'
#' @description
#' A general grouping of services within a category.
#'
#' @docType class
#' @title ServiceType
#' @description ServiceType Class
#' @format An \code{R6Class} generator object
#' @field st_id  integer
#' @field st_name  character
#' @field st_category  integer
#' @field st_module  character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServiceType <- R6::R6Class(
  "ServiceType",
  public = list(
    `st_id` = NULL,
    `st_name` = NULL,
    `st_category` = NULL,
    `st_module` = NULL,

    #' @description
    #' Initialize a new ServiceType class.
    #'
    #' @param st_id st_id
    #' @param st_name st_name
    #' @param st_category st_category
    #' @param st_module st_module
    #' @param ... Other optional arguments.
    initialize = function(`st_id`, `st_name`, `st_category`, `st_module`, ...) {
      if (!missing(`st_id`)) {
        if (!(is.numeric(`st_id`) && length(`st_id`) == 1)) {
          stop(paste("Error! Invalid data for `st_id`. Must be an integer:", `st_id`))
        }
        self$`st_id` <- `st_id`
      }
      if (!missing(`st_name`)) {
        if (!(is.character(`st_name`) && length(`st_name`) == 1)) {
          stop(paste("Error! Invalid data for `st_name`. Must be a string:", `st_name`))
        }
        self$`st_name` <- `st_name`
      }
      if (!missing(`st_category`)) {
        if (!(is.numeric(`st_category`) && length(`st_category`) == 1)) {
          stop(paste("Error! Invalid data for `st_category`. Must be an integer:", `st_category`))
        }
        self$`st_category` <- `st_category`
      }
      if (!missing(`st_module`)) {
        if (!(is.character(`st_module`) && length(`st_module`) == 1)) {
          stop(paste("Error! Invalid data for `st_module`. Must be a string:", `st_module`))
        }
        self$`st_module` <- `st_module`
      }
    },

    #' @description
    #' Convert to an R object. This method is deprecated. Use `toSimpleType()` instead.
    toJSON = function() {
      .Deprecated(new = "toSimpleType", msg = "Use the '$toSimpleType()' method instead since that is more clearly named. Use '$toJSONString()' to get a JSON string")
      return(self$toSimpleType())
    },

    #' @description
    #' Convert to a List
    #'
    #' Convert the R6 object to a list to work more easily with other tooling.
    #'
    #' @return ServiceType as a base R list.
    #' @examples
    #' # convert array of ServiceType (x) to a data frame
    #' \dontrun{
    #' library(purrr)
    #' library(tibble)
    #' df <- x |> map(\(y)y$toList()) |> map(as_tibble) |> list_rbind()
    #' df
    #' }
    toList = function() {
      return(self$toSimpleType())
    },

    #' @description
    #' Convert ServiceType to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServiceTypeObject <- list()
      if (!is.null(self$`st_id`)) {
        ServiceTypeObject[["st_id"]] <-
          self$`st_id`
      }
      if (!is.null(self$`st_name`)) {
        ServiceTypeObject[["st_name"]] <-
          self$`st_name`
      }
      if (!is.null(self$`st_category`)) {
        ServiceTypeObject[["st_category"]] <-
          self$`st_category`
      }
      if (!is.null(self$`st_module`)) {
        ServiceTypeObject[["st_module"]] <-
          self$`st_module`
      }
      return(ServiceTypeObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServiceType
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServiceType
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`st_id`)) {
        self$`st_id` <- this_object$`st_id`
      }
      if (!is.null(this_object$`st_name`)) {
        self$`st_name` <- this_object$`st_name`
      }
      if (!is.null(this_object$`st_category`)) {
        self$`st_category` <- this_object$`st_category`
      }
      if (!is.null(this_object$`st_module`)) {
        self$`st_module` <- this_object$`st_module`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServiceType in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServiceType
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServiceType
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`st_id` <- this_object$`st_id`
      self$`st_name` <- this_object$`st_name`
      self$`st_category` <- this_object$`st_category`
      self$`st_module` <- this_object$`st_module`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServiceType and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `st_id`
      if (!is.null(input_json$`st_id`)) {
        if (!(is.numeric(input_json$`st_id`) && length(input_json$`st_id`) == 1)) {
          stop(paste("Error! Invalid data for `st_id`. Must be an integer:", input_json$`st_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServiceType: the required field `st_id` is missing."))
      }
      # check the required field `st_name`
      if (!is.null(input_json$`st_name`)) {
        if (!(is.character(input_json$`st_name`) && length(input_json$`st_name`) == 1)) {
          stop(paste("Error! Invalid data for `st_name`. Must be a string:", input_json$`st_name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServiceType: the required field `st_name` is missing."))
      }
      # check the required field `st_category`
      if (!is.null(input_json$`st_category`)) {
        if (!(is.numeric(input_json$`st_category`) && length(input_json$`st_category`) == 1)) {
          stop(paste("Error! Invalid data for `st_category`. Must be an integer:", input_json$`st_category`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServiceType: the required field `st_category` is missing."))
      }
      # check the required field `st_module`
      if (!is.null(input_json$`st_module`)) {
        if (!(is.character(input_json$`st_module`) && length(input_json$`st_module`) == 1)) {
          stop(paste("Error! Invalid data for `st_module`. Must be a string:", input_json$`st_module`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServiceType: the required field `st_module` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServiceType
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `st_id` is null
      if (is.null(self$`st_id`)) {
        return(FALSE)
      }

      # check if the required `st_name` is null
      if (is.null(self$`st_name`)) {
        return(FALSE)
      }

      # check if the required `st_category` is null
      if (is.null(self$`st_category`)) {
        return(FALSE)
      }

      # check if the required `st_module` is null
      if (is.null(self$`st_module`)) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `st_id` is null
      if (is.null(self$`st_id`)) {
        invalid_fields["st_id"] <- "Non-nullable required field `st_id` cannot be null."
      }

      # check if the required `st_name` is null
      if (is.null(self$`st_name`)) {
        invalid_fields["st_name"] <- "Non-nullable required field `st_name` cannot be null."
      }

      # check if the required `st_category` is null
      if (is.null(self$`st_category`)) {
        invalid_fields["st_category"] <- "Non-nullable required field `st_category` cannot be null."
      }

      # check if the required `st_module` is null
      if (is.null(self$`st_module`)) {
        invalid_fields["st_module"] <- "Non-nullable required field `st_module` cannot be null."
      }

      invalid_fields
    },

    #' @description
    #' Print the object
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# ServiceType$unlock()
#
## Below is an example to define the print function
# ServiceType$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServiceType$lock()

