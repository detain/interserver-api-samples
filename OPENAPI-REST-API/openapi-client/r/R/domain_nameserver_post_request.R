#' Create a new DomainNameserverPostRequest
#'
#' @description
#' Payload for adding a registered nameserver (glue record).
#'
#' @docType class
#' @title DomainNameserverPostRequest
#' @description DomainNameserverPostRequest Class
#' @format An \code{R6Class} generator object
#' @field name  character
#' @field ipAddress  character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainNameserverPostRequest <- R6::R6Class(
  "DomainNameserverPostRequest",
  public = list(
    `name` = NULL,
    `ipAddress` = NULL,

    #' @description
    #' Initialize a new DomainNameserverPostRequest class.
    #'
    #' @param name name
    #' @param ipAddress ipAddress
    #' @param ... Other optional arguments.
    initialize = function(`name`, `ipAddress`, ...) {
      if (!missing(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!missing(`ipAddress`)) {
        if (!(is.character(`ipAddress`) && length(`ipAddress`) == 1)) {
          stop(paste("Error! Invalid data for `ipAddress`. Must be a string:", `ipAddress`))
        }
        self$`ipAddress` <- `ipAddress`
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
    #' @return DomainNameserverPostRequest as a base R list.
    #' @examples
    #' # convert array of DomainNameserverPostRequest (x) to a data frame
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
    #' Convert DomainNameserverPostRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainNameserverPostRequestObject <- list()
      if (!is.null(self$`name`)) {
        DomainNameserverPostRequestObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`ipAddress`)) {
        DomainNameserverPostRequestObject[["ipAddress"]] <-
          self$`ipAddress`
      }
      return(DomainNameserverPostRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainNameserverPostRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainNameserverPostRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`ipAddress`)) {
        self$`ipAddress` <- this_object$`ipAddress`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainNameserverPostRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainNameserverPostRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainNameserverPostRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`name` <- this_object$`name`
      self$`ipAddress` <- this_object$`ipAddress`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainNameserverPostRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `name`
      if (!is.null(input_json$`name`)) {
        if (!(is.character(input_json$`name`) && length(input_json$`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", input_json$`name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DomainNameserverPostRequest: the required field `name` is missing."))
      }
      # check the required field `ipAddress`
      if (!is.null(input_json$`ipAddress`)) {
        if (!(is.character(input_json$`ipAddress`) && length(input_json$`ipAddress`) == 1)) {
          stop(paste("Error! Invalid data for `ipAddress`. Must be a string:", input_json$`ipAddress`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DomainNameserverPostRequest: the required field `ipAddress` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainNameserverPostRequest
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `name` is null
      if (is.null(self$`name`)) {
        return(FALSE)
      }

      # check if the required `ipAddress` is null
      if (is.null(self$`ipAddress`)) {
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
      # check if the required `name` is null
      if (is.null(self$`name`)) {
        invalid_fields["name"] <- "Non-nullable required field `name` cannot be null."
      }

      # check if the required `ipAddress` is null
      if (is.null(self$`ipAddress`)) {
        invalid_fields["ipAddress"] <- "Non-nullable required field `ipAddress` cannot be null."
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
# DomainNameserverPostRequest$unlock()
#
## Below is an example to define the print function
# DomainNameserverPostRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainNameserverPostRequest$lock()

