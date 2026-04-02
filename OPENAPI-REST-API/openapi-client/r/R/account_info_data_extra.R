#' Create a new AccountInfoDataExtra
#'
#' @description
#' AccountInfoDataExtra Class
#'
#' @docType class
#' @title AccountInfoDataExtra
#' @description AccountInfoDataExtra Class
#' @format An \code{R6Class} generator object
#' @field private_whois  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountInfoDataExtra <- R6::R6Class(
  "AccountInfoDataExtra",
  public = list(
    `private_whois` = NULL,

    #' @description
    #' Initialize a new AccountInfoDataExtra class.
    #'
    #' @param private_whois private_whois
    #' @param ... Other optional arguments.
    initialize = function(`private_whois` = NULL, ...) {
      if (!is.null(`private_whois`)) {
        if (!(is.character(`private_whois`) && length(`private_whois`) == 1)) {
          stop(paste("Error! Invalid data for `private_whois`. Must be a string:", `private_whois`))
        }
        self$`private_whois` <- `private_whois`
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
    #' @return AccountInfoDataExtra as a base R list.
    #' @examples
    #' # convert array of AccountInfoDataExtra (x) to a data frame
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
    #' Convert AccountInfoDataExtra to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountInfoDataExtraObject <- list()
      if (!is.null(self$`private_whois`)) {
        AccountInfoDataExtraObject[["private_whois"]] <-
          self$`private_whois`
      }
      return(AccountInfoDataExtraObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoDataExtra
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoDataExtra
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`private_whois`)) {
        self$`private_whois` <- this_object$`private_whois`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountInfoDataExtra in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoDataExtra
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoDataExtra
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`private_whois` <- this_object$`private_whois`
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountInfoDataExtra and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountInfoDataExtra
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
# AccountInfoDataExtra$unlock()
#
## Below is an example to define the print function
# AccountInfoDataExtra$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountInfoDataExtra$lock()

