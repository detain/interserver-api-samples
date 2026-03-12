#' Create a new AccountSshKey
#'
#' @description
#' SSH Keys
#'
#' @docType class
#' @title AccountSshKey
#' @description AccountSshKey Class
#' @format An \code{R6Class} generator object
#' @field ssh_key  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountSshKey <- R6::R6Class(
  "AccountSshKey",
  public = list(
    `ssh_key` = NULL,

    #' @description
    #' Initialize a new AccountSshKey class.
    #'
    #' @param ssh_key ssh_key
    #' @param ... Other optional arguments.
    initialize = function(`ssh_key` = NULL, ...) {
      if (!is.null(`ssh_key`)) {
        if (!(is.character(`ssh_key`) && length(`ssh_key`) == 1)) {
          stop(paste("Error! Invalid data for `ssh_key`. Must be a string:", `ssh_key`))
        }
        self$`ssh_key` <- `ssh_key`
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
    #' @return AccountSshKey as a base R list.
    #' @examples
    #' # convert array of AccountSshKey (x) to a data frame
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
    #' Convert AccountSshKey to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountSshKeyObject <- list()
      if (!is.null(self$`ssh_key`)) {
        AccountSshKeyObject[["ssh_key"]] <-
          self$`ssh_key`
      }
      return(AccountSshKeyObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountSshKey
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountSshKey
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`ssh_key`)) {
        self$`ssh_key` <- this_object$`ssh_key`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountSshKey in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountSshKey
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountSshKey
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`ssh_key` <- this_object$`ssh_key`
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountSshKey and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountSshKey
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
# AccountSshKey$unlock()
#
## Below is an example to define the print function
# AccountSshKey$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountSshKey$lock()

