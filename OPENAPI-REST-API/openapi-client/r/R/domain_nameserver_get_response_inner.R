#' Create a new DomainNameserverGetResponseInner
#'
#' @description
#' DomainNameserverGetResponseInner Class
#'
#' @docType class
#' @title DomainNameserverGetResponseInner
#' @description DomainNameserverGetResponseInner Class
#' @format An \code{R6Class} generator object
#' @field name  character
#' @field ipaddress  character
#' @field can_delete Whether the registrar allows deletion of this nameserver entry. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainNameserverGetResponseInner <- R6::R6Class(
  "DomainNameserverGetResponseInner",
  public = list(
    `name` = NULL,
    `ipaddress` = NULL,
    `can_delete` = NULL,

    #' @description
    #' Initialize a new DomainNameserverGetResponseInner class.
    #'
    #' @param name name
    #' @param ipaddress ipaddress
    #' @param can_delete Whether the registrar allows deletion of this nameserver entry.
    #' @param ... Other optional arguments.
    initialize = function(`name`, `ipaddress`, `can_delete`, ...) {
      if (!missing(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!missing(`ipaddress`)) {
        if (!(is.character(`ipaddress`) && length(`ipaddress`) == 1)) {
          stop(paste("Error! Invalid data for `ipaddress`. Must be a string:", `ipaddress`))
        }
        self$`ipaddress` <- `ipaddress`
      }
      if (!missing(`can_delete`)) {
        if (!(`can_delete` %in% c("0", "1"))) {
          stop(paste("Error! \"", `can_delete`, "\" cannot be assigned to `can_delete`. Must be \"0\", \"1\".", sep = ""))
        }
        if (!(is.character(`can_delete`) && length(`can_delete`) == 1)) {
          stop(paste("Error! Invalid data for `can_delete`. Must be a string:", `can_delete`))
        }
        self$`can_delete` <- `can_delete`
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
    #' @return DomainNameserverGetResponseInner as a base R list.
    #' @examples
    #' # convert array of DomainNameserverGetResponseInner (x) to a data frame
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
    #' Convert DomainNameserverGetResponseInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainNameserverGetResponseInnerObject <- list()
      if (!is.null(self$`name`)) {
        DomainNameserverGetResponseInnerObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`ipaddress`)) {
        DomainNameserverGetResponseInnerObject[["ipaddress"]] <-
          self$`ipaddress`
      }
      if (!is.null(self$`can_delete`)) {
        DomainNameserverGetResponseInnerObject[["can_delete"]] <-
          self$`can_delete`
      }
      return(DomainNameserverGetResponseInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainNameserverGetResponseInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainNameserverGetResponseInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`ipaddress`)) {
        self$`ipaddress` <- this_object$`ipaddress`
      }
      if (!is.null(this_object$`can_delete`)) {
        if (!is.null(this_object$`can_delete`) && !(this_object$`can_delete` %in% c("0", "1"))) {
          stop(paste("Error! \"", this_object$`can_delete`, "\" cannot be assigned to `can_delete`. Must be \"0\", \"1\".", sep = ""))
        }
        self$`can_delete` <- this_object$`can_delete`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainNameserverGetResponseInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainNameserverGetResponseInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainNameserverGetResponseInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`name` <- this_object$`name`
      self$`ipaddress` <- this_object$`ipaddress`
      if (!is.null(this_object$`can_delete`) && !(this_object$`can_delete` %in% c("0", "1"))) {
        stop(paste("Error! \"", this_object$`can_delete`, "\" cannot be assigned to `can_delete`. Must be \"0\", \"1\".", sep = ""))
      }
      self$`can_delete` <- this_object$`can_delete`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainNameserverGetResponseInner and throw an exception if invalid
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
        stop(paste("The JSON input `", input, "` is invalid for DomainNameserverGetResponseInner: the required field `name` is missing."))
      }
      # check the required field `ipaddress`
      if (!is.null(input_json$`ipaddress`)) {
        if (!(is.character(input_json$`ipaddress`) && length(input_json$`ipaddress`) == 1)) {
          stop(paste("Error! Invalid data for `ipaddress`. Must be a string:", input_json$`ipaddress`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DomainNameserverGetResponseInner: the required field `ipaddress` is missing."))
      }
      # check the required field `can_delete`
      if (!is.null(input_json$`can_delete`)) {
        if (!(is.character(input_json$`can_delete`) && length(input_json$`can_delete`) == 1)) {
          stop(paste("Error! Invalid data for `can_delete`. Must be a string:", input_json$`can_delete`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DomainNameserverGetResponseInner: the required field `can_delete` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainNameserverGetResponseInner
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

      # check if the required `ipaddress` is null
      if (is.null(self$`ipaddress`)) {
        return(FALSE)
      }

      # check if the required `can_delete` is null
      if (is.null(self$`can_delete`)) {
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

      # check if the required `ipaddress` is null
      if (is.null(self$`ipaddress`)) {
        invalid_fields["ipaddress"] <- "Non-nullable required field `ipaddress` cannot be null."
      }

      # check if the required `can_delete` is null
      if (is.null(self$`can_delete`)) {
        invalid_fields["can_delete"] <- "Non-nullable required field `can_delete` cannot be null."
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
# DomainNameserverGetResponseInner$unlock()
#
## Below is an example to define the print function
# DomainNameserverGetResponseInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainNameserverGetResponseInner$lock()

