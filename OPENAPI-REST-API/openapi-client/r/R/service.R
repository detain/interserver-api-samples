#' Create a new Service
#'
#' @description
#' An individual package tied to one of our services.
#'
#' @docType class
#' @title Service
#' @description Service Class
#' @format An \code{R6Class} generator object
#' @field services_id  integer
#' @field services_name  character
#' @field services_cost  numeric
#' @field services_currency  character
#' @field services_category  integer
#' @field services_buyable  character
#' @field services_type  integer
#' @field services_field1  character
#' @field services_field2  character
#' @field services_module  character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Service <- R6::R6Class(
  "Service",
  public = list(
    `services_id` = NULL,
    `services_name` = NULL,
    `services_cost` = NULL,
    `services_currency` = NULL,
    `services_category` = NULL,
    `services_buyable` = NULL,
    `services_type` = NULL,
    `services_field1` = NULL,
    `services_field2` = NULL,
    `services_module` = NULL,

    #' @description
    #' Initialize a new Service class.
    #'
    #' @param services_id services_id
    #' @param services_name services_name
    #' @param services_cost services_cost
    #' @param services_currency services_currency
    #' @param services_category services_category
    #' @param services_buyable services_buyable
    #' @param services_type services_type
    #' @param services_field1 services_field1
    #' @param services_field2 services_field2
    #' @param services_module services_module
    #' @param ... Other optional arguments.
    initialize = function(`services_id`, `services_name`, `services_cost`, `services_currency`, `services_category`, `services_buyable`, `services_type`, `services_field1`, `services_field2`, `services_module`, ...) {
      if (!missing(`services_id`)) {
        if (!(is.numeric(`services_id`) && length(`services_id`) == 1)) {
          stop(paste("Error! Invalid data for `services_id`. Must be an integer:", `services_id`))
        }
        self$`services_id` <- `services_id`
      }
      if (!missing(`services_name`)) {
        if (!(is.character(`services_name`) && length(`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", `services_name`))
        }
        self$`services_name` <- `services_name`
      }
      if (!missing(`services_cost`)) {
        self$`services_cost` <- `services_cost`
      }
      if (!missing(`services_currency`)) {
        if (!(is.character(`services_currency`) && length(`services_currency`) == 1)) {
          stop(paste("Error! Invalid data for `services_currency`. Must be a string:", `services_currency`))
        }
        self$`services_currency` <- `services_currency`
      }
      if (!missing(`services_category`)) {
        if (!(is.numeric(`services_category`) && length(`services_category`) == 1)) {
          stop(paste("Error! Invalid data for `services_category`. Must be an integer:", `services_category`))
        }
        self$`services_category` <- `services_category`
      }
      if (!missing(`services_buyable`)) {
        if (!(is.logical(`services_buyable`) && length(`services_buyable`) == 1)) {
          stop(paste("Error! Invalid data for `services_buyable`. Must be a boolean:", `services_buyable`))
        }
        self$`services_buyable` <- `services_buyable`
      }
      if (!missing(`services_type`)) {
        if (!(is.numeric(`services_type`) && length(`services_type`) == 1)) {
          stop(paste("Error! Invalid data for `services_type`. Must be an integer:", `services_type`))
        }
        self$`services_type` <- `services_type`
      }
      if (!missing(`services_field1`)) {
        if (!(is.character(`services_field1`) && length(`services_field1`) == 1)) {
          stop(paste("Error! Invalid data for `services_field1`. Must be a string:", `services_field1`))
        }
        self$`services_field1` <- `services_field1`
      }
      if (!missing(`services_field2`)) {
        if (!(is.character(`services_field2`) && length(`services_field2`) == 1)) {
          stop(paste("Error! Invalid data for `services_field2`. Must be a string:", `services_field2`))
        }
        self$`services_field2` <- `services_field2`
      }
      if (!missing(`services_module`)) {
        if (!(is.character(`services_module`) && length(`services_module`) == 1)) {
          stop(paste("Error! Invalid data for `services_module`. Must be a string:", `services_module`))
        }
        self$`services_module` <- `services_module`
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
    #' @return Service as a base R list.
    #' @examples
    #' # convert array of Service (x) to a data frame
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
    #' Convert Service to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServiceObject <- list()
      if (!is.null(self$`services_id`)) {
        ServiceObject[["services_id"]] <-
          self$`services_id`
      }
      if (!is.null(self$`services_name`)) {
        ServiceObject[["services_name"]] <-
          self$`services_name`
      }
      if (!is.null(self$`services_cost`)) {
        ServiceObject[["services_cost"]] <-
          self$`services_cost`
      }
      if (!is.null(self$`services_currency`)) {
        ServiceObject[["services_currency"]] <-
          self$`services_currency`
      }
      if (!is.null(self$`services_category`)) {
        ServiceObject[["services_category"]] <-
          self$`services_category`
      }
      if (!is.null(self$`services_buyable`)) {
        ServiceObject[["services_buyable"]] <-
          self$`services_buyable`
      }
      if (!is.null(self$`services_type`)) {
        ServiceObject[["services_type"]] <-
          self$`services_type`
      }
      if (!is.null(self$`services_field1`)) {
        ServiceObject[["services_field1"]] <-
          self$`services_field1`
      }
      if (!is.null(self$`services_field2`)) {
        ServiceObject[["services_field2"]] <-
          self$`services_field2`
      }
      if (!is.null(self$`services_module`)) {
        ServiceObject[["services_module"]] <-
          self$`services_module`
      }
      return(ServiceObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of Service
    #'
    #' @param input_json the JSON input
    #' @return the instance of Service
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`services_id`)) {
        self$`services_id` <- this_object$`services_id`
      }
      if (!is.null(this_object$`services_name`)) {
        self$`services_name` <- this_object$`services_name`
      }
      if (!is.null(this_object$`services_cost`)) {
        self$`services_cost` <- this_object$`services_cost`
      }
      if (!is.null(this_object$`services_currency`)) {
        self$`services_currency` <- this_object$`services_currency`
      }
      if (!is.null(this_object$`services_category`)) {
        self$`services_category` <- this_object$`services_category`
      }
      if (!is.null(this_object$`services_buyable`)) {
        self$`services_buyable` <- this_object$`services_buyable`
      }
      if (!is.null(this_object$`services_type`)) {
        self$`services_type` <- this_object$`services_type`
      }
      if (!is.null(this_object$`services_field1`)) {
        self$`services_field1` <- this_object$`services_field1`
      }
      if (!is.null(this_object$`services_field2`)) {
        self$`services_field2` <- this_object$`services_field2`
      }
      if (!is.null(this_object$`services_module`)) {
        self$`services_module` <- this_object$`services_module`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return Service in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of Service
    #'
    #' @param input_json the JSON input
    #' @return the instance of Service
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`services_id` <- this_object$`services_id`
      self$`services_name` <- this_object$`services_name`
      self$`services_cost` <- this_object$`services_cost`
      self$`services_currency` <- this_object$`services_currency`
      self$`services_category` <- this_object$`services_category`
      self$`services_buyable` <- this_object$`services_buyable`
      self$`services_type` <- this_object$`services_type`
      self$`services_field1` <- this_object$`services_field1`
      self$`services_field2` <- this_object$`services_field2`
      self$`services_module` <- this_object$`services_module`
      self
    },

    #' @description
    #' Validate JSON input with respect to Service and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `services_id`
      if (!is.null(input_json$`services_id`)) {
        if (!(is.numeric(input_json$`services_id`) && length(input_json$`services_id`) == 1)) {
          stop(paste("Error! Invalid data for `services_id`. Must be an integer:", input_json$`services_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for Service: the required field `services_id` is missing."))
      }
      # check the required field `services_name`
      if (!is.null(input_json$`services_name`)) {
        if (!(is.character(input_json$`services_name`) && length(input_json$`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", input_json$`services_name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for Service: the required field `services_name` is missing."))
      }
      # check the required field `services_cost`
      if (!is.null(input_json$`services_cost`)) {
      } else {
        stop(paste("The JSON input `", input, "` is invalid for Service: the required field `services_cost` is missing."))
      }
      # check the required field `services_currency`
      if (!is.null(input_json$`services_currency`)) {
        if (!(is.character(input_json$`services_currency`) && length(input_json$`services_currency`) == 1)) {
          stop(paste("Error! Invalid data for `services_currency`. Must be a string:", input_json$`services_currency`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for Service: the required field `services_currency` is missing."))
      }
      # check the required field `services_category`
      if (!is.null(input_json$`services_category`)) {
        if (!(is.numeric(input_json$`services_category`) && length(input_json$`services_category`) == 1)) {
          stop(paste("Error! Invalid data for `services_category`. Must be an integer:", input_json$`services_category`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for Service: the required field `services_category` is missing."))
      }
      # check the required field `services_buyable`
      if (!is.null(input_json$`services_buyable`)) {
        if (!(is.logical(input_json$`services_buyable`) && length(input_json$`services_buyable`) == 1)) {
          stop(paste("Error! Invalid data for `services_buyable`. Must be a boolean:", input_json$`services_buyable`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for Service: the required field `services_buyable` is missing."))
      }
      # check the required field `services_type`
      if (!is.null(input_json$`services_type`)) {
        if (!(is.numeric(input_json$`services_type`) && length(input_json$`services_type`) == 1)) {
          stop(paste("Error! Invalid data for `services_type`. Must be an integer:", input_json$`services_type`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for Service: the required field `services_type` is missing."))
      }
      # check the required field `services_field1`
      if (!is.null(input_json$`services_field1`)) {
        if (!(is.character(input_json$`services_field1`) && length(input_json$`services_field1`) == 1)) {
          stop(paste("Error! Invalid data for `services_field1`. Must be a string:", input_json$`services_field1`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for Service: the required field `services_field1` is missing."))
      }
      # check the required field `services_field2`
      if (!is.null(input_json$`services_field2`)) {
        if (!(is.character(input_json$`services_field2`) && length(input_json$`services_field2`) == 1)) {
          stop(paste("Error! Invalid data for `services_field2`. Must be a string:", input_json$`services_field2`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for Service: the required field `services_field2` is missing."))
      }
      # check the required field `services_module`
      if (!is.null(input_json$`services_module`)) {
        if (!(is.character(input_json$`services_module`) && length(input_json$`services_module`) == 1)) {
          stop(paste("Error! Invalid data for `services_module`. Must be a string:", input_json$`services_module`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for Service: the required field `services_module` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of Service
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `services_id` is null
      if (is.null(self$`services_id`)) {
        return(FALSE)
      }

      # check if the required `services_name` is null
      if (is.null(self$`services_name`)) {
        return(FALSE)
      }

      # check if the required `services_cost` is null
      if (is.null(self$`services_cost`)) {
        return(FALSE)
      }

      # check if the required `services_currency` is null
      if (is.null(self$`services_currency`)) {
        return(FALSE)
      }

      # check if the required `services_category` is null
      if (is.null(self$`services_category`)) {
        return(FALSE)
      }

      # check if the required `services_buyable` is null
      if (is.null(self$`services_buyable`)) {
        return(FALSE)
      }

      # check if the required `services_type` is null
      if (is.null(self$`services_type`)) {
        return(FALSE)
      }

      # check if the required `services_field1` is null
      if (is.null(self$`services_field1`)) {
        return(FALSE)
      }

      # check if the required `services_field2` is null
      if (is.null(self$`services_field2`)) {
        return(FALSE)
      }

      # check if the required `services_module` is null
      if (is.null(self$`services_module`)) {
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
      # check if the required `services_id` is null
      if (is.null(self$`services_id`)) {
        invalid_fields["services_id"] <- "Non-nullable required field `services_id` cannot be null."
      }

      # check if the required `services_name` is null
      if (is.null(self$`services_name`)) {
        invalid_fields["services_name"] <- "Non-nullable required field `services_name` cannot be null."
      }

      # check if the required `services_cost` is null
      if (is.null(self$`services_cost`)) {
        invalid_fields["services_cost"] <- "Non-nullable required field `services_cost` cannot be null."
      }

      # check if the required `services_currency` is null
      if (is.null(self$`services_currency`)) {
        invalid_fields["services_currency"] <- "Non-nullable required field `services_currency` cannot be null."
      }

      # check if the required `services_category` is null
      if (is.null(self$`services_category`)) {
        invalid_fields["services_category"] <- "Non-nullable required field `services_category` cannot be null."
      }

      # check if the required `services_buyable` is null
      if (is.null(self$`services_buyable`)) {
        invalid_fields["services_buyable"] <- "Non-nullable required field `services_buyable` cannot be null."
      }

      # check if the required `services_type` is null
      if (is.null(self$`services_type`)) {
        invalid_fields["services_type"] <- "Non-nullable required field `services_type` cannot be null."
      }

      # check if the required `services_field1` is null
      if (is.null(self$`services_field1`)) {
        invalid_fields["services_field1"] <- "Non-nullable required field `services_field1` cannot be null."
      }

      # check if the required `services_field2` is null
      if (is.null(self$`services_field2`)) {
        invalid_fields["services_field2"] <- "Non-nullable required field `services_field2` cannot be null."
      }

      # check if the required `services_module` is null
      if (is.null(self$`services_module`)) {
        invalid_fields["services_module"] <- "Non-nullable required field `services_module` cannot be null."
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
# Service$unlock()
#
## Below is an example to define the print function
# Service$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# Service$lock()

