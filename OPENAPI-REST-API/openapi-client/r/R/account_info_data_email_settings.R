#' Create a new AccountInfoDataEmailSettings
#'
#' @description
#' AccountInfoDataEmailSettings Class
#'
#' @docType class
#' @title AccountInfoDataEmailSettings
#' @description AccountInfoDataEmailSettings Class
#' @format An \code{R6Class} generator object
#' @field admin/cc_bad_response  character [optional]
#' @field admin/mass_communications.tpl  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountInfoDataEmailSettings <- R6::R6Class(
  "AccountInfoDataEmailSettings",
  public = list(
    `admin/cc_bad_response` = NULL,
    `admin/mass_communications.tpl` = NULL,

    #' @description
    #' Initialize a new AccountInfoDataEmailSettings class.
    #'
    #' @param admin/cc_bad_response admin/cc_bad_response
    #' @param admin/mass_communications.tpl admin/mass_communications.tpl
    #' @param ... Other optional arguments.
    initialize = function(`admin/cc_bad_response` = NULL, `admin/mass_communications.tpl` = NULL, ...) {
      if (!is.null(`admin/cc_bad_response`)) {
        if (!(is.character(`admin/cc_bad_response`) && length(`admin/cc_bad_response`) == 1)) {
          stop(paste("Error! Invalid data for `admin/cc_bad_response`. Must be a string:", `admin/cc_bad_response`))
        }
        self$`admin/cc_bad_response` <- `admin/cc_bad_response`
      }
      if (!is.null(`admin/mass_communications.tpl`)) {
        if (!(is.character(`admin/mass_communications.tpl`) && length(`admin/mass_communications.tpl`) == 1)) {
          stop(paste("Error! Invalid data for `admin/mass_communications.tpl`. Must be a string:", `admin/mass_communications.tpl`))
        }
        self$`admin/mass_communications.tpl` <- `admin/mass_communications.tpl`
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
    #' @return AccountInfoDataEmailSettings as a base R list.
    #' @examples
    #' # convert array of AccountInfoDataEmailSettings (x) to a data frame
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
    #' Convert AccountInfoDataEmailSettings to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountInfoDataEmailSettingsObject <- list()
      if (!is.null(self$`admin/cc_bad_response`)) {
        AccountInfoDataEmailSettingsObject[["admin/cc_bad_response"]] <-
          self$`admin/cc_bad_response`
      }
      if (!is.null(self$`admin/mass_communications.tpl`)) {
        AccountInfoDataEmailSettingsObject[["admin/mass_communications.tpl"]] <-
          self$`admin/mass_communications.tpl`
      }
      return(AccountInfoDataEmailSettingsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoDataEmailSettings
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoDataEmailSettings
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`admin/cc_bad_response`)) {
        self$`admin/cc_bad_response` <- this_object$`admin/cc_bad_response`
      }
      if (!is.null(this_object$`admin/mass_communications.tpl`)) {
        self$`admin/mass_communications.tpl` <- this_object$`admin/mass_communications.tpl`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountInfoDataEmailSettings in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoDataEmailSettings
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoDataEmailSettings
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`admin/cc_bad_response` <- this_object$`admin/cc_bad_response`
      self$`admin/mass_communications.tpl` <- this_object$`admin/mass_communications.tpl`
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountInfoDataEmailSettings and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountInfoDataEmailSettings
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
# AccountInfoDataEmailSettings$unlock()
#
## Below is an example to define the print function
# AccountInfoDataEmailSettings$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountInfoDataEmailSettings$lock()

