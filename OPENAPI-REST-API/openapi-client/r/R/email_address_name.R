#' Create a new EmailAddressName
#'
#' @description
#' An email contact.
#'
#' @docType class
#' @title EmailAddressName
#' @description EmailAddressName Class
#' @format An \code{R6Class} generator object
#' @field email The email address. character
#' @field name Name to use for the sending contact. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
EmailAddressName <- R6::R6Class(
  "EmailAddressName",
  public = list(
    `email` = NULL,
    `name` = NULL,

    #' @description
    #' Initialize a new EmailAddressName class.
    #'
    #' @param email The email address.
    #' @param name Name to use for the sending contact.
    #' @param ... Other optional arguments.
    initialize = function(`email`, `name` = NULL, ...) {
      if (!missing(`email`)) {
        if (!(is.character(`email`) && length(`email`) == 1)) {
          stop(paste("Error! Invalid data for `email`. Must be a string:", `email`))
        }
        self$`email` <- `email`
      }
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
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
    #' @return EmailAddressName as a base R list.
    #' @examples
    #' # convert array of EmailAddressName (x) to a data frame
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
    #' Convert EmailAddressName to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      EmailAddressNameObject <- list()
      if (!is.null(self$`email`)) {
        EmailAddressNameObject[["email"]] <-
          self$`email`
      }
      if (!is.null(self$`name`)) {
        EmailAddressNameObject[["name"]] <-
          self$`name`
      }
      return(EmailAddressNameObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of EmailAddressName
    #'
    #' @param input_json the JSON input
    #' @return the instance of EmailAddressName
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`email`)) {
        self$`email` <- this_object$`email`
      }
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return EmailAddressName in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of EmailAddressName
    #'
    #' @param input_json the JSON input
    #' @return the instance of EmailAddressName
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`email` <- this_object$`email`
      self$`name` <- this_object$`name`
      self
    },

    #' @description
    #' Validate JSON input with respect to EmailAddressName and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `email`
      if (!is.null(input_json$`email`)) {
        if (!(is.character(input_json$`email`) && length(input_json$`email`) == 1)) {
          stop(paste("Error! Invalid data for `email`. Must be a string:", input_json$`email`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for EmailAddressName: the required field `email` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of EmailAddressName
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `email` is null
      if (is.null(self$`email`)) {
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
      # check if the required `email` is null
      if (is.null(self$`email`)) {
        invalid_fields["email"] <- "Non-nullable required field `email` cannot be null."
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
# EmailAddressName$unlock()
#
## Below is an example to define the print function
# EmailAddressName$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# EmailAddressName$lock()

