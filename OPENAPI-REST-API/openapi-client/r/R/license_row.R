#' Create a new LicenseRow
#'
#' @description
#' A result row from the `Licenses` `GET` request.
#'
#' @docType class
#' @title LicenseRow
#' @description LicenseRow Class
#' @format An \code{R6Class} generator object
#' @field license_id The id of the license. character [optional]
#' @field license_hostname The hostname of the license. character [optional]
#' @field license_ip The ip of the license. character [optional]
#' @field services_name The services name of the license. character [optional]
#' @field cost The cost of the license. character [optional]
#' @field license_status The status of the license. character [optional]
#' @field invoices_paid The invoices paid of the license. character [optional]
#' @field invoices_date The invoices date of the license. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LicenseRow <- R6::R6Class(
  "LicenseRow",
  public = list(
    `license_id` = NULL,
    `license_hostname` = NULL,
    `license_ip` = NULL,
    `services_name` = NULL,
    `cost` = NULL,
    `license_status` = NULL,
    `invoices_paid` = NULL,
    `invoices_date` = NULL,

    #' @description
    #' Initialize a new LicenseRow class.
    #'
    #' @param license_id The id of the license.
    #' @param license_hostname The hostname of the license.
    #' @param license_ip The ip of the license.
    #' @param services_name The services name of the license.
    #' @param cost The cost of the license.
    #' @param license_status The status of the license.
    #' @param invoices_paid The invoices paid of the license.
    #' @param invoices_date The invoices date of the license.
    #' @param ... Other optional arguments.
    initialize = function(`license_id` = NULL, `license_hostname` = NULL, `license_ip` = NULL, `services_name` = NULL, `cost` = NULL, `license_status` = NULL, `invoices_paid` = NULL, `invoices_date` = NULL, ...) {
      if (!is.null(`license_id`)) {
        if (!(is.character(`license_id`) && length(`license_id`) == 1)) {
          stop(paste("Error! Invalid data for `license_id`. Must be a string:", `license_id`))
        }
        self$`license_id` <- `license_id`
      }
      if (!is.null(`license_hostname`)) {
        if (!(is.character(`license_hostname`) && length(`license_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `license_hostname`. Must be a string:", `license_hostname`))
        }
        self$`license_hostname` <- `license_hostname`
      }
      if (!is.null(`license_ip`)) {
        if (!(is.character(`license_ip`) && length(`license_ip`) == 1)) {
          stop(paste("Error! Invalid data for `license_ip`. Must be a string:", `license_ip`))
        }
        self$`license_ip` <- `license_ip`
      }
      if (!is.null(`services_name`)) {
        if (!(is.character(`services_name`) && length(`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", `services_name`))
        }
        self$`services_name` <- `services_name`
      }
      if (!is.null(`cost`)) {
        if (!(is.character(`cost`) && length(`cost`) == 1)) {
          stop(paste("Error! Invalid data for `cost`. Must be a string:", `cost`))
        }
        self$`cost` <- `cost`
      }
      if (!is.null(`license_status`)) {
        if (!(is.character(`license_status`) && length(`license_status`) == 1)) {
          stop(paste("Error! Invalid data for `license_status`. Must be a string:", `license_status`))
        }
        self$`license_status` <- `license_status`
      }
      if (!is.null(`invoices_paid`)) {
        if (!(is.character(`invoices_paid`) && length(`invoices_paid`) == 1)) {
          stop(paste("Error! Invalid data for `invoices_paid`. Must be a string:", `invoices_paid`))
        }
        self$`invoices_paid` <- `invoices_paid`
      }
      if (!is.null(`invoices_date`)) {
        if (!is.character(`invoices_date`)) {
          stop(paste("Error! Invalid data for `invoices_date`. Must be a string:", `invoices_date`))
        }
        self$`invoices_date` <- `invoices_date`
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
    #' @return LicenseRow as a base R list.
    #' @examples
    #' # convert array of LicenseRow (x) to a data frame
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
    #' Convert LicenseRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LicenseRowObject <- list()
      if (!is.null(self$`license_id`)) {
        LicenseRowObject[["license_id"]] <-
          self$`license_id`
      }
      if (!is.null(self$`license_hostname`)) {
        LicenseRowObject[["license_hostname"]] <-
          self$`license_hostname`
      }
      if (!is.null(self$`license_ip`)) {
        LicenseRowObject[["license_ip"]] <-
          self$`license_ip`
      }
      if (!is.null(self$`services_name`)) {
        LicenseRowObject[["services_name"]] <-
          self$`services_name`
      }
      if (!is.null(self$`cost`)) {
        LicenseRowObject[["cost"]] <-
          self$`cost`
      }
      if (!is.null(self$`license_status`)) {
        LicenseRowObject[["license_status"]] <-
          self$`license_status`
      }
      if (!is.null(self$`invoices_paid`)) {
        LicenseRowObject[["invoices_paid"]] <-
          self$`invoices_paid`
      }
      if (!is.null(self$`invoices_date`)) {
        LicenseRowObject[["invoices_date"]] <-
          self$`invoices_date`
      }
      return(LicenseRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of LicenseRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicenseRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`license_id`)) {
        self$`license_id` <- this_object$`license_id`
      }
      if (!is.null(this_object$`license_hostname`)) {
        self$`license_hostname` <- this_object$`license_hostname`
      }
      if (!is.null(this_object$`license_ip`)) {
        self$`license_ip` <- this_object$`license_ip`
      }
      if (!is.null(this_object$`services_name`)) {
        self$`services_name` <- this_object$`services_name`
      }
      if (!is.null(this_object$`cost`)) {
        self$`cost` <- this_object$`cost`
      }
      if (!is.null(this_object$`license_status`)) {
        self$`license_status` <- this_object$`license_status`
      }
      if (!is.null(this_object$`invoices_paid`)) {
        self$`invoices_paid` <- this_object$`invoices_paid`
      }
      if (!is.null(this_object$`invoices_date`)) {
        self$`invoices_date` <- this_object$`invoices_date`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LicenseRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LicenseRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicenseRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`license_id` <- this_object$`license_id`
      self$`license_hostname` <- this_object$`license_hostname`
      self$`license_ip` <- this_object$`license_ip`
      self$`services_name` <- this_object$`services_name`
      self$`cost` <- this_object$`cost`
      self$`license_status` <- this_object$`license_status`
      self$`invoices_paid` <- this_object$`invoices_paid`
      self$`invoices_date` <- this_object$`invoices_date`
      self
    },

    #' @description
    #' Validate JSON input with respect to LicenseRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LicenseRow
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
# LicenseRow$unlock()
#
## Below is an example to define the print function
# LicenseRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LicenseRow$lock()

