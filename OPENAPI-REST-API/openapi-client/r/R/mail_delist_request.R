#' Create a new MailDelistRequest
#'
#' @description
#' Payload for removing a sender from mail blocklists.
#'
#' @docType class
#' @title MailDelistRequest
#' @description MailDelistRequest Class
#' @format An \code{R6Class} generator object
#' @field unblock Email address to delist. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailDelistRequest <- R6::R6Class(
  "MailDelistRequest",
  public = list(
    `unblock` = NULL,

    #' @description
    #' Initialize a new MailDelistRequest class.
    #'
    #' @param unblock Email address to delist.
    #' @param ... Other optional arguments.
    initialize = function(`unblock` = NULL, ...) {
      if (!is.null(`unblock`)) {
        if (!(is.character(`unblock`) && length(`unblock`) == 1)) {
          stop(paste("Error! Invalid data for `unblock`. Must be a string:", `unblock`))
        }
        self$`unblock` <- `unblock`
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
    #' @return MailDelistRequest as a base R list.
    #' @examples
    #' # convert array of MailDelistRequest (x) to a data frame
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
    #' Convert MailDelistRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailDelistRequestObject <- list()
      if (!is.null(self$`unblock`)) {
        MailDelistRequestObject[["unblock"]] <-
          self$`unblock`
      }
      return(MailDelistRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailDelistRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailDelistRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`unblock`)) {
        self$`unblock` <- this_object$`unblock`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailDelistRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailDelistRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailDelistRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`unblock` <- this_object$`unblock`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailDelistRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailDelistRequest
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
# MailDelistRequest$unlock()
#
## Below is an example to define the print function
# MailDelistRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailDelistRequest$lock()

