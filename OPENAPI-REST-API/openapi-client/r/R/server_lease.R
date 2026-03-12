#' Create a new ServerLease
#'
#' @description
#' ServerLease Class
#'
#' @docType class
#' @title ServerLease
#' @description ServerLease Class
#' @format An \code{R6Class} generator object
#' @field mac MAC address associated with the lease. character
#' @field authenticated Indicates if the lease is authenticated. character
#' @field group Group identifier for the lease. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerLease <- R6::R6Class(
  "ServerLease",
  public = list(
    `mac` = NULL,
    `authenticated` = NULL,
    `group` = NULL,

    #' @description
    #' Initialize a new ServerLease class.
    #'
    #' @param mac MAC address associated with the lease.
    #' @param authenticated Indicates if the lease is authenticated.
    #' @param group Group identifier for the lease.
    #' @param ... Other optional arguments.
    initialize = function(`mac`, `authenticated`, `group`, ...) {
      if (!missing(`mac`)) {
        if (!(is.character(`mac`) && length(`mac`) == 1)) {
          stop(paste("Error! Invalid data for `mac`. Must be a string:", `mac`))
        }
        self$`mac` <- `mac`
      }
      if (!missing(`authenticated`)) {
        if (!(is.logical(`authenticated`) && length(`authenticated`) == 1)) {
          stop(paste("Error! Invalid data for `authenticated`. Must be a boolean:", `authenticated`))
        }
        self$`authenticated` <- `authenticated`
      }
      if (!missing(`group`)) {
        if (!(is.character(`group`) && length(`group`) == 1)) {
          stop(paste("Error! Invalid data for `group`. Must be a string:", `group`))
        }
        self$`group` <- `group`
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
    #' @return ServerLease as a base R list.
    #' @examples
    #' # convert array of ServerLease (x) to a data frame
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
    #' Convert ServerLease to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerLeaseObject <- list()
      if (!is.null(self$`mac`)) {
        ServerLeaseObject[["mac"]] <-
          self$`mac`
      }
      if (!is.null(self$`authenticated`)) {
        ServerLeaseObject[["authenticated"]] <-
          self$`authenticated`
      }
      if (!is.null(self$`group`)) {
        ServerLeaseObject[["group"]] <-
          self$`group`
      }
      return(ServerLeaseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerLease
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerLease
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`mac`)) {
        self$`mac` <- this_object$`mac`
      }
      if (!is.null(this_object$`authenticated`)) {
        self$`authenticated` <- this_object$`authenticated`
      }
      if (!is.null(this_object$`group`)) {
        self$`group` <- this_object$`group`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerLease in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerLease
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerLease
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`mac` <- this_object$`mac`
      self$`authenticated` <- this_object$`authenticated`
      self$`group` <- this_object$`group`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerLease and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `mac`
      if (!is.null(input_json$`mac`)) {
        if (!(is.character(input_json$`mac`) && length(input_json$`mac`) == 1)) {
          stop(paste("Error! Invalid data for `mac`. Must be a string:", input_json$`mac`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerLease: the required field `mac` is missing."))
      }
      # check the required field `authenticated`
      if (!is.null(input_json$`authenticated`)) {
        if (!(is.logical(input_json$`authenticated`) && length(input_json$`authenticated`) == 1)) {
          stop(paste("Error! Invalid data for `authenticated`. Must be a boolean:", input_json$`authenticated`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerLease: the required field `authenticated` is missing."))
      }
      # check the required field `group`
      if (!is.null(input_json$`group`)) {
        if (!(is.character(input_json$`group`) && length(input_json$`group`) == 1)) {
          stop(paste("Error! Invalid data for `group`. Must be a string:", input_json$`group`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServerLease: the required field `group` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerLease
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `mac` is null
      if (is.null(self$`mac`)) {
        return(FALSE)
      }

      # check if the required `authenticated` is null
      if (is.null(self$`authenticated`)) {
        return(FALSE)
      }

      # check if the required `group` is null
      if (is.null(self$`group`)) {
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
      # check if the required `mac` is null
      if (is.null(self$`mac`)) {
        invalid_fields["mac"] <- "Non-nullable required field `mac` cannot be null."
      }

      # check if the required `authenticated` is null
      if (is.null(self$`authenticated`)) {
        invalid_fields["authenticated"] <- "Non-nullable required field `authenticated` cannot be null."
      }

      # check if the required `group` is null
      if (is.null(self$`group`)) {
        invalid_fields["group"] <- "Non-nullable required field `group` cannot be null."
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
# ServerLease$unlock()
#
## Below is an example to define the print function
# ServerLease$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerLease$lock()

