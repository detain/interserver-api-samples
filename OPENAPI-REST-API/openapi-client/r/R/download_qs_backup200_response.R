#' Create a new DownloadQsBackup200Response
#'
#' @description
#' DownloadQsBackup200Response Class
#'
#' @docType class
#' @title DownloadQsBackup200Response
#' @description DownloadQsBackup200Response Class
#' @format An \code{R6Class} generator object
#' @field text  character [optional]
#' @field url A pre-signed download URL valid for 24 hours. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DownloadQsBackup200Response <- R6::R6Class(
  "DownloadQsBackup200Response",
  public = list(
    `text` = NULL,
    `url` = NULL,

    #' @description
    #' Initialize a new DownloadQsBackup200Response class.
    #'
    #' @param text text
    #' @param url A pre-signed download URL valid for 24 hours.
    #' @param ... Other optional arguments.
    initialize = function(`text` = NULL, `url` = NULL, ...) {
      if (!is.null(`text`)) {
        if (!(is.character(`text`) && length(`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", `text`))
        }
        self$`text` <- `text`
      }
      if (!is.null(`url`)) {
        if (!(is.character(`url`) && length(`url`) == 1)) {
          stop(paste("Error! Invalid data for `url`. Must be a string:", `url`))
        }
        self$`url` <- `url`
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
    #' @return DownloadQsBackup200Response as a base R list.
    #' @examples
    #' # convert array of DownloadQsBackup200Response (x) to a data frame
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
    #' Convert DownloadQsBackup200Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DownloadQsBackup200ResponseObject <- list()
      if (!is.null(self$`text`)) {
        DownloadQsBackup200ResponseObject[["text"]] <-
          self$`text`
      }
      if (!is.null(self$`url`)) {
        DownloadQsBackup200ResponseObject[["url"]] <-
          self$`url`
      }
      return(DownloadQsBackup200ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DownloadQsBackup200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of DownloadQsBackup200Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      if (!is.null(this_object$`url`)) {
        self$`url` <- this_object$`url`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DownloadQsBackup200Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DownloadQsBackup200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of DownloadQsBackup200Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`text` <- this_object$`text`
      self$`url` <- this_object$`url`
      self
    },

    #' @description
    #' Validate JSON input with respect to DownloadQsBackup200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DownloadQsBackup200Response
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
# DownloadQsBackup200Response$unlock()
#
## Below is an example to define the print function
# DownloadQsBackup200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DownloadQsBackup200Response$lock()

