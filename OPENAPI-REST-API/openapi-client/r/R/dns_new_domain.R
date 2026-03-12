#' Create a new DnsNewDomain
#'
#' @description
#' The request for a new domain to be managed by the dns servers.
#'
#' @docType class
#' @title DnsNewDomain
#' @description DnsNewDomain Class
#' @format An \code{R6Class} generator object
#' @field domain The domain name. character
#' @field ip IP Address to point the domain to. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DnsNewDomain <- R6::R6Class(
  "DnsNewDomain",
  public = list(
    `domain` = NULL,
    `ip` = NULL,

    #' @description
    #' Initialize a new DnsNewDomain class.
    #'
    #' @param domain The domain name.
    #' @param ip IP Address to point the domain to.
    #' @param ... Other optional arguments.
    initialize = function(`domain`, `ip`, ...) {
      if (!missing(`domain`)) {
        if (!(is.character(`domain`) && length(`domain`) == 1)) {
          stop(paste("Error! Invalid data for `domain`. Must be a string:", `domain`))
        }
        self$`domain` <- `domain`
      }
      if (!missing(`ip`)) {
        if (!(is.character(`ip`) && length(`ip`) == 1)) {
          stop(paste("Error! Invalid data for `ip`. Must be a string:", `ip`))
        }
        self$`ip` <- `ip`
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
    #' @return DnsNewDomain as a base R list.
    #' @examples
    #' # convert array of DnsNewDomain (x) to a data frame
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
    #' Convert DnsNewDomain to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DnsNewDomainObject <- list()
      if (!is.null(self$`domain`)) {
        DnsNewDomainObject[["domain"]] <-
          self$`domain`
      }
      if (!is.null(self$`ip`)) {
        DnsNewDomainObject[["ip"]] <-
          self$`ip`
      }
      return(DnsNewDomainObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DnsNewDomain
    #'
    #' @param input_json the JSON input
    #' @return the instance of DnsNewDomain
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`domain`)) {
        self$`domain` <- this_object$`domain`
      }
      if (!is.null(this_object$`ip`)) {
        self$`ip` <- this_object$`ip`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DnsNewDomain in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DnsNewDomain
    #'
    #' @param input_json the JSON input
    #' @return the instance of DnsNewDomain
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`domain` <- this_object$`domain`
      self$`ip` <- this_object$`ip`
      self
    },

    #' @description
    #' Validate JSON input with respect to DnsNewDomain and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `domain`
      if (!is.null(input_json$`domain`)) {
        if (!(is.character(input_json$`domain`) && length(input_json$`domain`) == 1)) {
          stop(paste("Error! Invalid data for `domain`. Must be a string:", input_json$`domain`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsNewDomain: the required field `domain` is missing."))
      }
      # check the required field `ip`
      if (!is.null(input_json$`ip`)) {
        if (!(is.character(input_json$`ip`) && length(input_json$`ip`) == 1)) {
          stop(paste("Error! Invalid data for `ip`. Must be a string:", input_json$`ip`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DnsNewDomain: the required field `ip` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DnsNewDomain
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `domain` is null
      if (is.null(self$`domain`)) {
        return(FALSE)
      }

      # check if the required `ip` is null
      if (is.null(self$`ip`)) {
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
      # check if the required `domain` is null
      if (is.null(self$`domain`)) {
        invalid_fields["domain"] <- "Non-nullable required field `domain` cannot be null."
      }

      # check if the required `ip` is null
      if (is.null(self$`ip`)) {
        invalid_fields["ip"] <- "Non-nullable required field `ip` cannot be null."
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
# DnsNewDomain$unlock()
#
## Below is an example to define the print function
# DnsNewDomain$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DnsNewDomain$lock()

