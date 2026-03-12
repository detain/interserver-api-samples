#' Create a new AccountInfoDataFraudrecord
#'
#' @description
#' AccountInfoDataFraudrecord Class
#'
#' @docType class
#' @title AccountInfoDataFraudrecord
#' @description AccountInfoDataFraudrecord Class
#' @format An \code{R6Class} generator object
#' @field score  character [optional]
#' @field count  character [optional]
#' @field reliability  character [optional]
#' @field code  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountInfoDataFraudrecord <- R6::R6Class(
  "AccountInfoDataFraudrecord",
  public = list(
    `score` = NULL,
    `count` = NULL,
    `reliability` = NULL,
    `code` = NULL,

    #' @description
    #' Initialize a new AccountInfoDataFraudrecord class.
    #'
    #' @param score score
    #' @param count count
    #' @param reliability reliability
    #' @param code code
    #' @param ... Other optional arguments.
    initialize = function(`score` = NULL, `count` = NULL, `reliability` = NULL, `code` = NULL, ...) {
      if (!is.null(`score`)) {
        if (!(is.character(`score`) && length(`score`) == 1)) {
          stop(paste("Error! Invalid data for `score`. Must be a string:", `score`))
        }
        self$`score` <- `score`
      }
      if (!is.null(`count`)) {
        if (!(is.character(`count`) && length(`count`) == 1)) {
          stop(paste("Error! Invalid data for `count`. Must be a string:", `count`))
        }
        self$`count` <- `count`
      }
      if (!is.null(`reliability`)) {
        if (!(is.character(`reliability`) && length(`reliability`) == 1)) {
          stop(paste("Error! Invalid data for `reliability`. Must be a string:", `reliability`))
        }
        self$`reliability` <- `reliability`
      }
      if (!is.null(`code`)) {
        if (!(is.character(`code`) && length(`code`) == 1)) {
          stop(paste("Error! Invalid data for `code`. Must be a string:", `code`))
        }
        self$`code` <- `code`
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
    #' @return AccountInfoDataFraudrecord as a base R list.
    #' @examples
    #' # convert array of AccountInfoDataFraudrecord (x) to a data frame
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
    #' Convert AccountInfoDataFraudrecord to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountInfoDataFraudrecordObject <- list()
      if (!is.null(self$`score`)) {
        AccountInfoDataFraudrecordObject[["score"]] <-
          self$`score`
      }
      if (!is.null(self$`count`)) {
        AccountInfoDataFraudrecordObject[["count"]] <-
          self$`count`
      }
      if (!is.null(self$`reliability`)) {
        AccountInfoDataFraudrecordObject[["reliability"]] <-
          self$`reliability`
      }
      if (!is.null(self$`code`)) {
        AccountInfoDataFraudrecordObject[["code"]] <-
          self$`code`
      }
      return(AccountInfoDataFraudrecordObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoDataFraudrecord
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoDataFraudrecord
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`score`)) {
        self$`score` <- this_object$`score`
      }
      if (!is.null(this_object$`count`)) {
        self$`count` <- this_object$`count`
      }
      if (!is.null(this_object$`reliability`)) {
        self$`reliability` <- this_object$`reliability`
      }
      if (!is.null(this_object$`code`)) {
        self$`code` <- this_object$`code`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountInfoDataFraudrecord in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoDataFraudrecord
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoDataFraudrecord
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`score` <- this_object$`score`
      self$`count` <- this_object$`count`
      self$`reliability` <- this_object$`reliability`
      self$`code` <- this_object$`code`
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountInfoDataFraudrecord and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountInfoDataFraudrecord
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
# AccountInfoDataFraudrecord$unlock()
#
## Below is an example to define the print function
# AccountInfoDataFraudrecord$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountInfoDataFraudrecord$lock()

