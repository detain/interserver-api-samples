#' Create a new DownloadQsBackupRequest
#'
#' @description
#' DownloadQsBackupRequest Class
#'
#' @docType class
#' @title DownloadQsBackupRequest
#' @description DownloadQsBackupRequest Class
#' @format An \code{R6Class} generator object
#' @field file The backup filename to download. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DownloadQsBackupRequest <- R6::R6Class(
  "DownloadQsBackupRequest",
  public = list(
    `file` = NULL,

    #' @description
    #' Initialize a new DownloadQsBackupRequest class.
    #'
    #' @param file The backup filename to download.
    #' @param ... Other optional arguments.
    initialize = function(`file`, ...) {
      if (!missing(`file`)) {
        if (!(is.character(`file`) && length(`file`) == 1)) {
          stop(paste("Error! Invalid data for `file`. Must be a string:", `file`))
        }
        self$`file` <- `file`
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
    #' @return DownloadQsBackupRequest as a base R list.
    #' @examples
    #' # convert array of DownloadQsBackupRequest (x) to a data frame
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
    #' Convert DownloadQsBackupRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DownloadQsBackupRequestObject <- list()
      if (!is.null(self$`file`)) {
        DownloadQsBackupRequestObject[["file"]] <-
          self$`file`
      }
      return(DownloadQsBackupRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DownloadQsBackupRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of DownloadQsBackupRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`file`)) {
        self$`file` <- this_object$`file`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DownloadQsBackupRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DownloadQsBackupRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of DownloadQsBackupRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`file` <- this_object$`file`
      self
    },

    #' @description
    #' Validate JSON input with respect to DownloadQsBackupRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `file`
      if (!is.null(input_json$`file`)) {
        if (!(is.character(input_json$`file`) && length(input_json$`file`) == 1)) {
          stop(paste("Error! Invalid data for `file`. Must be a string:", input_json$`file`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DownloadQsBackupRequest: the required field `file` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DownloadQsBackupRequest
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `file` is null
      if (is.null(self$`file`)) {
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
      # check if the required `file` is null
      if (is.null(self$`file`)) {
        invalid_fields["file"] <- "Non-nullable required field `file` cannot be null."
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
# DownloadQsBackupRequest$unlock()
#
## Below is an example to define the print function
# DownloadQsBackupRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DownloadQsBackupRequest$lock()

