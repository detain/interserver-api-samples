#' Create a new ScrubIpsRowSchema
#'
#' @description
#' ScrubIpsRowSchema Class
#'
#' @docType class
#' @title ScrubIpsRowSchema
#' @description ScrubIpsRowSchema Class
#' @format An \code{R6Class} generator object
#' @field scrub_ip_id  integer [optional]
#' @field repeat_invoices_cost  numeric [optional]
#' @field scrub_ip_ip  character [optional]
#' @field scrub_ip_status  character [optional]
#' @field services_name  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ScrubIpsRowSchema <- R6::R6Class(
  "ScrubIpsRowSchema",
  public = list(
    `scrub_ip_id` = NULL,
    `repeat_invoices_cost` = NULL,
    `scrub_ip_ip` = NULL,
    `scrub_ip_status` = NULL,
    `services_name` = NULL,

    #' @description
    #' Initialize a new ScrubIpsRowSchema class.
    #'
    #' @param scrub_ip_id scrub_ip_id
    #' @param repeat_invoices_cost repeat_invoices_cost
    #' @param scrub_ip_ip scrub_ip_ip
    #' @param scrub_ip_status scrub_ip_status
    #' @param services_name services_name
    #' @param ... Other optional arguments.
    initialize = function(`scrub_ip_id` = NULL, `repeat_invoices_cost` = NULL, `scrub_ip_ip` = NULL, `scrub_ip_status` = NULL, `services_name` = NULL, ...) {
      if (!is.null(`scrub_ip_id`)) {
        if (!(is.numeric(`scrub_ip_id`) && length(`scrub_ip_id`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_id`. Must be an integer:", `scrub_ip_id`))
        }
        self$`scrub_ip_id` <- `scrub_ip_id`
      }
      if (!is.null(`repeat_invoices_cost`)) {
        self$`repeat_invoices_cost` <- `repeat_invoices_cost`
      }
      if (!is.null(`scrub_ip_ip`)) {
        if (!(is.character(`scrub_ip_ip`) && length(`scrub_ip_ip`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_ip`. Must be a string:", `scrub_ip_ip`))
        }
        self$`scrub_ip_ip` <- `scrub_ip_ip`
      }
      if (!is.null(`scrub_ip_status`)) {
        if (!(is.character(`scrub_ip_status`) && length(`scrub_ip_status`) == 1)) {
          stop(paste("Error! Invalid data for `scrub_ip_status`. Must be a string:", `scrub_ip_status`))
        }
        self$`scrub_ip_status` <- `scrub_ip_status`
      }
      if (!is.null(`services_name`)) {
        if (!(is.character(`services_name`) && length(`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", `services_name`))
        }
        self$`services_name` <- `services_name`
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
    #' @return ScrubIpsRowSchema as a base R list.
    #' @examples
    #' # convert array of ScrubIpsRowSchema (x) to a data frame
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
    #' Convert ScrubIpsRowSchema to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ScrubIpsRowSchemaObject <- list()
      if (!is.null(self$`scrub_ip_id`)) {
        ScrubIpsRowSchemaObject[["scrub_ip_id"]] <-
          self$`scrub_ip_id`
      }
      if (!is.null(self$`repeat_invoices_cost`)) {
        ScrubIpsRowSchemaObject[["repeat_invoices_cost"]] <-
          self$`repeat_invoices_cost`
      }
      if (!is.null(self$`scrub_ip_ip`)) {
        ScrubIpsRowSchemaObject[["scrub_ip_ip"]] <-
          self$`scrub_ip_ip`
      }
      if (!is.null(self$`scrub_ip_status`)) {
        ScrubIpsRowSchemaObject[["scrub_ip_status"]] <-
          self$`scrub_ip_status`
      }
      if (!is.null(self$`services_name`)) {
        ScrubIpsRowSchemaObject[["services_name"]] <-
          self$`services_name`
      }
      return(ScrubIpsRowSchemaObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ScrubIpsRowSchema
    #'
    #' @param input_json the JSON input
    #' @return the instance of ScrubIpsRowSchema
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`scrub_ip_id`)) {
        self$`scrub_ip_id` <- this_object$`scrub_ip_id`
      }
      if (!is.null(this_object$`repeat_invoices_cost`)) {
        self$`repeat_invoices_cost` <- this_object$`repeat_invoices_cost`
      }
      if (!is.null(this_object$`scrub_ip_ip`)) {
        self$`scrub_ip_ip` <- this_object$`scrub_ip_ip`
      }
      if (!is.null(this_object$`scrub_ip_status`)) {
        self$`scrub_ip_status` <- this_object$`scrub_ip_status`
      }
      if (!is.null(this_object$`services_name`)) {
        self$`services_name` <- this_object$`services_name`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ScrubIpsRowSchema in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ScrubIpsRowSchema
    #'
    #' @param input_json the JSON input
    #' @return the instance of ScrubIpsRowSchema
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`scrub_ip_id` <- this_object$`scrub_ip_id`
      self$`repeat_invoices_cost` <- this_object$`repeat_invoices_cost`
      self$`scrub_ip_ip` <- this_object$`scrub_ip_ip`
      self$`scrub_ip_status` <- this_object$`scrub_ip_status`
      self$`services_name` <- this_object$`services_name`
      self
    },

    #' @description
    #' Validate JSON input with respect to ScrubIpsRowSchema and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ScrubIpsRowSchema
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
# ScrubIpsRowSchema$unlock()
#
## Below is an example to define the print function
# ScrubIpsRowSchema$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ScrubIpsRowSchema$lock()

