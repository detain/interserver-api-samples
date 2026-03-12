#' Create a new BuyItNowRowCpuInnerOneOf
#'
#' @description
#' BuyItNowRowCpuInnerOneOf Class
#'
#' @docType class
#' @title BuyItNowRowCpuInnerOneOf
#' @description BuyItNowRowCpuInnerOneOf Class
#' @format An \code{R6Class} generator object
#' @field img  character [optional]
#' @field type  character [optional]
#' @field speed  character [optional]
#' @field num_cpus  character [optional]
#' @field num_cores  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BuyItNowRowCpuInnerOneOf <- R6::R6Class(
  "BuyItNowRowCpuInnerOneOf",
  public = list(
    `img` = NULL,
    `type` = NULL,
    `speed` = NULL,
    `num_cpus` = NULL,
    `num_cores` = NULL,

    #' @description
    #' Initialize a new BuyItNowRowCpuInnerOneOf class.
    #'
    #' @param img img
    #' @param type type
    #' @param speed speed
    #' @param num_cpus num_cpus
    #' @param num_cores num_cores
    #' @param ... Other optional arguments.
    initialize = function(`img` = NULL, `type` = NULL, `speed` = NULL, `num_cpus` = NULL, `num_cores` = NULL, ...) {
      if (!is.null(`img`)) {
        if (!(is.character(`img`) && length(`img`) == 1)) {
          stop(paste("Error! Invalid data for `img`. Must be a string:", `img`))
        }
        self$`img` <- `img`
      }
      if (!is.null(`type`)) {
        if (!(is.character(`type`) && length(`type`) == 1)) {
          stop(paste("Error! Invalid data for `type`. Must be a string:", `type`))
        }
        self$`type` <- `type`
      }
      if (!is.null(`speed`)) {
        if (!(is.character(`speed`) && length(`speed`) == 1)) {
          stop(paste("Error! Invalid data for `speed`. Must be a string:", `speed`))
        }
        self$`speed` <- `speed`
      }
      if (!is.null(`num_cpus`)) {
        if (!(is.character(`num_cpus`) && length(`num_cpus`) == 1)) {
          stop(paste("Error! Invalid data for `num_cpus`. Must be a string:", `num_cpus`))
        }
        self$`num_cpus` <- `num_cpus`
      }
      if (!is.null(`num_cores`)) {
        if (!(is.character(`num_cores`) && length(`num_cores`) == 1)) {
          stop(paste("Error! Invalid data for `num_cores`. Must be a string:", `num_cores`))
        }
        self$`num_cores` <- `num_cores`
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
    #' @return BuyItNowRowCpuInnerOneOf as a base R list.
    #' @examples
    #' # convert array of BuyItNowRowCpuInnerOneOf (x) to a data frame
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
    #' Convert BuyItNowRowCpuInnerOneOf to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BuyItNowRowCpuInnerOneOfObject <- list()
      if (!is.null(self$`img`)) {
        BuyItNowRowCpuInnerOneOfObject[["img"]] <-
          self$`img`
      }
      if (!is.null(self$`type`)) {
        BuyItNowRowCpuInnerOneOfObject[["type"]] <-
          self$`type`
      }
      if (!is.null(self$`speed`)) {
        BuyItNowRowCpuInnerOneOfObject[["speed"]] <-
          self$`speed`
      }
      if (!is.null(self$`num_cpus`)) {
        BuyItNowRowCpuInnerOneOfObject[["num_cpus"]] <-
          self$`num_cpus`
      }
      if (!is.null(self$`num_cores`)) {
        BuyItNowRowCpuInnerOneOfObject[["num_cores"]] <-
          self$`num_cores`
      }
      return(BuyItNowRowCpuInnerOneOfObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BuyItNowRowCpuInnerOneOf
    #'
    #' @param input_json the JSON input
    #' @return the instance of BuyItNowRowCpuInnerOneOf
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`img`)) {
        self$`img` <- this_object$`img`
      }
      if (!is.null(this_object$`type`)) {
        self$`type` <- this_object$`type`
      }
      if (!is.null(this_object$`speed`)) {
        self$`speed` <- this_object$`speed`
      }
      if (!is.null(this_object$`num_cpus`)) {
        self$`num_cpus` <- this_object$`num_cpus`
      }
      if (!is.null(this_object$`num_cores`)) {
        self$`num_cores` <- this_object$`num_cores`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BuyItNowRowCpuInnerOneOf in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BuyItNowRowCpuInnerOneOf
    #'
    #' @param input_json the JSON input
    #' @return the instance of BuyItNowRowCpuInnerOneOf
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`img` <- this_object$`img`
      self$`type` <- this_object$`type`
      self$`speed` <- this_object$`speed`
      self$`num_cpus` <- this_object$`num_cpus`
      self$`num_cores` <- this_object$`num_cores`
      self
    },

    #' @description
    #' Validate JSON input with respect to BuyItNowRowCpuInnerOneOf and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BuyItNowRowCpuInnerOneOf
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
# BuyItNowRowCpuInnerOneOf$unlock()
#
## Below is an example to define the print function
# BuyItNowRowCpuInnerOneOf$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BuyItNowRowCpuInnerOneOf$lock()

