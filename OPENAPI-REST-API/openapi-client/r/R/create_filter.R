#' Create a new CreateFilter
#'
#' @description
#' Create firewall rule for your ip
#'
#' @docType class
#' @title CreateFilter
#' @description CreateFilter Class
#' @format An \code{R6Class} generator object
#' @field filter_type  character
#' @field port  integer
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CreateFilter <- R6::R6Class(
  "CreateFilter",
  public = list(
    `filter_type` = NULL,
    `port` = NULL,

    #' @description
    #' Initialize a new CreateFilter class.
    #'
    #' @param filter_type filter_type
    #' @param port port
    #' @param ... Other optional arguments.
    initialize = function(`filter_type`, `port`, ...) {
      if (!missing(`filter_type`)) {
        if (!(is.character(`filter_type`) && length(`filter_type`) == 1)) {
          stop(paste("Error! Invalid data for `filter_type`. Must be a string:", `filter_type`))
        }
        self$`filter_type` <- `filter_type`
      }
      if (!missing(`port`)) {
        if (!(is.numeric(`port`) && length(`port`) == 1)) {
          stop(paste("Error! Invalid data for `port`. Must be an integer:", `port`))
        }
        self$`port` <- `port`
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
    #' @return CreateFilter as a base R list.
    #' @examples
    #' # convert array of CreateFilter (x) to a data frame
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
    #' Convert CreateFilter to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      CreateFilterObject <- list()
      if (!is.null(self$`filter_type`)) {
        CreateFilterObject[["filter_type"]] <-
          self$`filter_type`
      }
      if (!is.null(self$`port`)) {
        CreateFilterObject[["port"]] <-
          self$`port`
      }
      return(CreateFilterObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of CreateFilter
    #'
    #' @param input_json the JSON input
    #' @return the instance of CreateFilter
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`filter_type`)) {
        self$`filter_type` <- this_object$`filter_type`
      }
      if (!is.null(this_object$`port`)) {
        self$`port` <- this_object$`port`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return CreateFilter in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of CreateFilter
    #'
    #' @param input_json the JSON input
    #' @return the instance of CreateFilter
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`filter_type` <- this_object$`filter_type`
      self$`port` <- this_object$`port`
      self
    },

    #' @description
    #' Validate JSON input with respect to CreateFilter and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `filter_type`
      if (!is.null(input_json$`filter_type`)) {
        if (!(is.character(input_json$`filter_type`) && length(input_json$`filter_type`) == 1)) {
          stop(paste("Error! Invalid data for `filter_type`. Must be a string:", input_json$`filter_type`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CreateFilter: the required field `filter_type` is missing."))
      }
      # check the required field `port`
      if (!is.null(input_json$`port`)) {
        if (!(is.numeric(input_json$`port`) && length(input_json$`port`) == 1)) {
          stop(paste("Error! Invalid data for `port`. Must be an integer:", input_json$`port`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CreateFilter: the required field `port` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CreateFilter
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `filter_type` is null
      if (is.null(self$`filter_type`)) {
        return(FALSE)
      }

      # check if the required `port` is null
      if (is.null(self$`port`)) {
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
      # check if the required `filter_type` is null
      if (is.null(self$`filter_type`)) {
        invalid_fields["filter_type"] <- "Non-nullable required field `filter_type` cannot be null."
      }

      # check if the required `port` is null
      if (is.null(self$`port`)) {
        invalid_fields["port"] <- "Non-nullable required field `port` cannot be null."
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
# CreateFilter$unlock()
#
## Below is an example to define the print function
# CreateFilter$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CreateFilter$lock()

