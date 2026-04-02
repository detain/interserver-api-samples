#' Create a new MailAttachment
#'
#' @description
#' (optional) File attachments to include in the email.  The file contents must be base64
#'
#' @docType class
#' @title MailAttachment
#' @description MailAttachment Class
#' @format An \code{R6Class} generator object
#' @field filename The filename of the attached file. character
#' @field data The file contents base64 encoded character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailAttachment <- R6::R6Class(
  "MailAttachment",
  public = list(
    `filename` = NULL,
    `data` = NULL,

    #' @description
    #' Initialize a new MailAttachment class.
    #'
    #' @param filename The filename of the attached file.
    #' @param data The file contents base64 encoded
    #' @param ... Other optional arguments.
    initialize = function(`filename`, `data`, ...) {
      if (!missing(`filename`)) {
        if (!(is.character(`filename`) && length(`filename`) == 1)) {
          stop(paste("Error! Invalid data for `filename`. Must be a string:", `filename`))
        }
        self$`filename` <- `filename`
      }
      if (!missing(`data`)) {
        if (!(is.character(`data`) && length(`data`) == 1)) {
          stop(paste("Error! Invalid data for `data`. Must be a string:", `data`))
        }
        self$`data` <- `data`
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
    #' @return MailAttachment as a base R list.
    #' @examples
    #' # convert array of MailAttachment (x) to a data frame
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
    #' Convert MailAttachment to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailAttachmentObject <- list()
      if (!is.null(self$`filename`)) {
        MailAttachmentObject[["filename"]] <-
          self$`filename`
      }
      if (!is.null(self$`data`)) {
        MailAttachmentObject[["data"]] <-
          self$`data`
      }
      return(MailAttachmentObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailAttachment
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailAttachment
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`filename`)) {
        self$`filename` <- this_object$`filename`
      }
      if (!is.null(this_object$`data`)) {
        self$`data` <- this_object$`data`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailAttachment in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailAttachment
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailAttachment
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`filename` <- this_object$`filename`
      self$`data` <- this_object$`data`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailAttachment and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `filename`
      if (!is.null(input_json$`filename`)) {
        if (!(is.character(input_json$`filename`) && length(input_json$`filename`) == 1)) {
          stop(paste("Error! Invalid data for `filename`. Must be a string:", input_json$`filename`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailAttachment: the required field `filename` is missing."))
      }
      # check the required field `data`
      if (!is.null(input_json$`data`)) {
        if (!(is.character(input_json$`data`) && length(input_json$`data`) == 1)) {
          stop(paste("Error! Invalid data for `data`. Must be a string:", input_json$`data`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailAttachment: the required field `data` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailAttachment
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `filename` is null
      if (is.null(self$`filename`)) {
        return(FALSE)
      }

      # check if the required `data` is null
      if (is.null(self$`data`)) {
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
      # check if the required `filename` is null
      if (is.null(self$`filename`)) {
        invalid_fields["filename"] <- "Non-nullable required field `filename` cannot be null."
      }

      # check if the required `data` is null
      if (is.null(self$`data`)) {
        invalid_fields["data"] <- "Non-nullable required field `data` cannot be null."
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
# MailAttachment$unlock()
#
## Below is an example to define the print function
# MailAttachment$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailAttachment$lock()

