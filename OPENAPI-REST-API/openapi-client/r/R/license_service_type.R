#' Create a new LicenseServiceType
#'
#' @description
#' Service type definition for a software license, including name, pricing, and category.
#'
#' @docType class
#' @title LicenseServiceType
#' @description LicenseServiceType Class
#' @format An \code{R6Class} generator object
#' @field services_id Service ID character [optional]
#' @field services_name Service name character [optional]
#' @field services_cost Service cost character [optional]
#' @field services_category Service category character [optional]
#' @field services_buyable Buyable status character [optional]
#' @field services_type Service type character [optional]
#' @field services_field1 Service field 1 character [optional]
#' @field services_field2 Service field 2 character [optional]
#' @field services_module Service module character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LicenseServiceType <- R6::R6Class(
  "LicenseServiceType",
  public = list(
    `services_id` = NULL,
    `services_name` = NULL,
    `services_cost` = NULL,
    `services_category` = NULL,
    `services_buyable` = NULL,
    `services_type` = NULL,
    `services_field1` = NULL,
    `services_field2` = NULL,
    `services_module` = NULL,

    #' @description
    #' Initialize a new LicenseServiceType class.
    #'
    #' @param services_id Service ID
    #' @param services_name Service name
    #' @param services_cost Service cost
    #' @param services_category Service category
    #' @param services_buyable Buyable status
    #' @param services_type Service type
    #' @param services_field1 Service field 1
    #' @param services_field2 Service field 2
    #' @param services_module Service module
    #' @param ... Other optional arguments.
    initialize = function(`services_id` = NULL, `services_name` = NULL, `services_cost` = NULL, `services_category` = NULL, `services_buyable` = NULL, `services_type` = NULL, `services_field1` = NULL, `services_field2` = NULL, `services_module` = NULL, ...) {
      if (!is.null(`services_id`)) {
        if (!(is.character(`services_id`) && length(`services_id`) == 1)) {
          stop(paste("Error! Invalid data for `services_id`. Must be a string:", `services_id`))
        }
        self$`services_id` <- `services_id`
      }
      if (!is.null(`services_name`)) {
        if (!(is.character(`services_name`) && length(`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", `services_name`))
        }
        self$`services_name` <- `services_name`
      }
      if (!is.null(`services_cost`)) {
        if (!(is.character(`services_cost`) && length(`services_cost`) == 1)) {
          stop(paste("Error! Invalid data for `services_cost`. Must be a string:", `services_cost`))
        }
        self$`services_cost` <- `services_cost`
      }
      if (!is.null(`services_category`)) {
        if (!(is.character(`services_category`) && length(`services_category`) == 1)) {
          stop(paste("Error! Invalid data for `services_category`. Must be a string:", `services_category`))
        }
        self$`services_category` <- `services_category`
      }
      if (!is.null(`services_buyable`)) {
        if (!(is.character(`services_buyable`) && length(`services_buyable`) == 1)) {
          stop(paste("Error! Invalid data for `services_buyable`. Must be a string:", `services_buyable`))
        }
        self$`services_buyable` <- `services_buyable`
      }
      if (!is.null(`services_type`)) {
        if (!(is.character(`services_type`) && length(`services_type`) == 1)) {
          stop(paste("Error! Invalid data for `services_type`. Must be a string:", `services_type`))
        }
        self$`services_type` <- `services_type`
      }
      if (!is.null(`services_field1`)) {
        if (!(is.character(`services_field1`) && length(`services_field1`) == 1)) {
          stop(paste("Error! Invalid data for `services_field1`. Must be a string:", `services_field1`))
        }
        self$`services_field1` <- `services_field1`
      }
      if (!is.null(`services_field2`)) {
        if (!(is.character(`services_field2`) && length(`services_field2`) == 1)) {
          stop(paste("Error! Invalid data for `services_field2`. Must be a string:", `services_field2`))
        }
        self$`services_field2` <- `services_field2`
      }
      if (!is.null(`services_module`)) {
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
    #' @return LicenseServiceType as a base R list.
    #' @examples
    #' # convert array of LicenseServiceType (x) to a data frame
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
    #' Convert LicenseServiceType to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LicenseServiceTypeObject <- list()
      if (!is.null(self$`services_id`)) {
        LicenseServiceTypeObject[["services_id"]] <-
          self$`services_id`
      }
      if (!is.null(self$`services_name`)) {
        LicenseServiceTypeObject[["services_name"]] <-
          self$`services_name`
      }
      if (!is.null(self$`services_cost`)) {
        LicenseServiceTypeObject[["services_cost"]] <-
          self$`services_cost`
      }
      if (!is.null(self$`services_category`)) {
        LicenseServiceTypeObject[["services_category"]] <-
          self$`services_category`
      }
      if (!is.null(self$`services_buyable`)) {
        LicenseServiceTypeObject[["services_buyable"]] <-
          self$`services_buyable`
      }
      if (!is.null(self$`services_type`)) {
        LicenseServiceTypeObject[["services_type"]] <-
          self$`services_type`
      }
      if (!is.null(self$`services_field1`)) {
        LicenseServiceTypeObject[["services_field1"]] <-
          self$`services_field1`
      }
      if (!is.null(self$`services_field2`)) {
        LicenseServiceTypeObject[["services_field2"]] <-
          self$`services_field2`
      }
      if (!is.null(self$`services_module`)) {
        LicenseServiceTypeObject[["services_module"]] <-
          self$`services_module`
      }
      return(LicenseServiceTypeObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of LicenseServiceType
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicenseServiceType
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
    #' @return LicenseServiceType in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LicenseServiceType
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicenseServiceType
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`services_id` <- this_object$`services_id`
      self$`services_name` <- this_object$`services_name`
      self$`services_cost` <- this_object$`services_cost`
      self$`services_category` <- this_object$`services_category`
      self$`services_buyable` <- this_object$`services_buyable`
      self$`services_type` <- this_object$`services_type`
      self$`services_field1` <- this_object$`services_field1`
      self$`services_field2` <- this_object$`services_field2`
      self$`services_module` <- this_object$`services_module`
      self
    },

    #' @description
    #' Validate JSON input with respect to LicenseServiceType and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LicenseServiceType
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
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
# LicenseServiceType$unlock()
#
## Below is an example to define the print function
# LicenseServiceType$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LicenseServiceType$lock()

