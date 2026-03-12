#' Create a new LoginServiceCounts
#'
#' @description
#' Order counts per module.
#'
#' @docType class
#' @title LoginServiceCounts
#' @description LoginServiceCounts Class
#' @format An \code{R6Class} generator object
#' @field vps The number of total VPS orders that have been placed in our billing system. integer
#' @field websites The number of total website orders that have been placed in our billing system. integer
#' @field servers The number of total server orders that have been placed in our billing system. integer
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LoginServiceCounts <- R6::R6Class(
  "LoginServiceCounts",
  public = list(
    `vps` = NULL,
    `websites` = NULL,
    `servers` = NULL,

    #' @description
    #' Initialize a new LoginServiceCounts class.
    #'
    #' @param vps The number of total VPS orders that have been placed in our billing system.
    #' @param websites The number of total website orders that have been placed in our billing system.
    #' @param servers The number of total server orders that have been placed in our billing system.
    #' @param ... Other optional arguments.
    initialize = function(`vps`, `websites`, `servers`, ...) {
      if (!missing(`vps`)) {
        if (!(is.numeric(`vps`) && length(`vps`) == 1)) {
          stop(paste("Error! Invalid data for `vps`. Must be an integer:", `vps`))
        }
        self$`vps` <- `vps`
      }
      if (!missing(`websites`)) {
        if (!(is.numeric(`websites`) && length(`websites`) == 1)) {
          stop(paste("Error! Invalid data for `websites`. Must be an integer:", `websites`))
        }
        self$`websites` <- `websites`
      }
      if (!missing(`servers`)) {
        if (!(is.numeric(`servers`) && length(`servers`) == 1)) {
          stop(paste("Error! Invalid data for `servers`. Must be an integer:", `servers`))
        }
        self$`servers` <- `servers`
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
    #' @return LoginServiceCounts as a base R list.
    #' @examples
    #' # convert array of LoginServiceCounts (x) to a data frame
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
    #' Convert LoginServiceCounts to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LoginServiceCountsObject <- list()
      if (!is.null(self$`vps`)) {
        LoginServiceCountsObject[["vps"]] <-
          self$`vps`
      }
      if (!is.null(self$`websites`)) {
        LoginServiceCountsObject[["websites"]] <-
          self$`websites`
      }
      if (!is.null(self$`servers`)) {
        LoginServiceCountsObject[["servers"]] <-
          self$`servers`
      }
      return(LoginServiceCountsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of LoginServiceCounts
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginServiceCounts
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`vps`)) {
        self$`vps` <- this_object$`vps`
      }
      if (!is.null(this_object$`websites`)) {
        self$`websites` <- this_object$`websites`
      }
      if (!is.null(this_object$`servers`)) {
        self$`servers` <- this_object$`servers`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LoginServiceCounts in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LoginServiceCounts
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginServiceCounts
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`vps` <- this_object$`vps`
      self$`websites` <- this_object$`websites`
      self$`servers` <- this_object$`servers`
      self
    },

    #' @description
    #' Validate JSON input with respect to LoginServiceCounts and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `vps`
      if (!is.null(input_json$`vps`)) {
        if (!(is.numeric(input_json$`vps`) && length(input_json$`vps`) == 1)) {
          stop(paste("Error! Invalid data for `vps`. Must be an integer:", input_json$`vps`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for LoginServiceCounts: the required field `vps` is missing."))
      }
      # check the required field `websites`
      if (!is.null(input_json$`websites`)) {
        if (!(is.numeric(input_json$`websites`) && length(input_json$`websites`) == 1)) {
          stop(paste("Error! Invalid data for `websites`. Must be an integer:", input_json$`websites`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for LoginServiceCounts: the required field `websites` is missing."))
      }
      # check the required field `servers`
      if (!is.null(input_json$`servers`)) {
        if (!(is.numeric(input_json$`servers`) && length(input_json$`servers`) == 1)) {
          stop(paste("Error! Invalid data for `servers`. Must be an integer:", input_json$`servers`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for LoginServiceCounts: the required field `servers` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LoginServiceCounts
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `vps` is null
      if (is.null(self$`vps`)) {
        return(FALSE)
      }

      # check if the required `websites` is null
      if (is.null(self$`websites`)) {
        return(FALSE)
      }

      # check if the required `servers` is null
      if (is.null(self$`servers`)) {
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
      # check if the required `vps` is null
      if (is.null(self$`vps`)) {
        invalid_fields["vps"] <- "Non-nullable required field `vps` cannot be null."
      }

      # check if the required `websites` is null
      if (is.null(self$`websites`)) {
        invalid_fields["websites"] <- "Non-nullable required field `websites` cannot be null."
      }

      # check if the required `servers` is null
      if (is.null(self$`servers`)) {
        invalid_fields["servers"] <- "Non-nullable required field `servers` cannot be null."
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
# LoginServiceCounts$unlock()
#
## Below is an example to define the print function
# LoginServiceCounts$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LoginServiceCounts$lock()

