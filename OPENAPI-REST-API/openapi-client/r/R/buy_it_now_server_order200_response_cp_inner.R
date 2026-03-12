#' Create a new BuyItNowServerOrder200ResponseCpInner
#'
#' @description
#' BuyItNowServerOrder200ResponseCpInner Class
#'
#' @docType class
#' @title BuyItNowServerOrder200ResponseCpInner
#' @description BuyItNowServerOrder200ResponseCpInner Class
#' @format An \code{R6Class} generator object
#' @field id  character [optional]
#' @field short_desc  character [optional]
#' @field long_desc  character [optional]
#' @field os_type  character [optional]
#' @field monthly_price  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BuyItNowServerOrder200ResponseCpInner <- R6::R6Class(
  "BuyItNowServerOrder200ResponseCpInner",
  public = list(
    `id` = NULL,
    `short_desc` = NULL,
    `long_desc` = NULL,
    `os_type` = NULL,
    `monthly_price` = NULL,

    #' @description
    #' Initialize a new BuyItNowServerOrder200ResponseCpInner class.
    #'
    #' @param id id
    #' @param short_desc short_desc
    #' @param long_desc long_desc
    #' @param os_type os_type
    #' @param monthly_price monthly_price
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `short_desc` = NULL, `long_desc` = NULL, `os_type` = NULL, `monthly_price` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.character(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", `id`))
        }
        self$`id` <- `id`
      }
      if (!is.null(`short_desc`)) {
        if (!(is.character(`short_desc`) && length(`short_desc`) == 1)) {
          stop(paste("Error! Invalid data for `short_desc`. Must be a string:", `short_desc`))
        }
        self$`short_desc` <- `short_desc`
      }
      if (!is.null(`long_desc`)) {
        if (!(is.character(`long_desc`) && length(`long_desc`) == 1)) {
          stop(paste("Error! Invalid data for `long_desc`. Must be a string:", `long_desc`))
        }
        self$`long_desc` <- `long_desc`
      }
      if (!is.null(`os_type`)) {
        if (!(is.character(`os_type`) && length(`os_type`) == 1)) {
          stop(paste("Error! Invalid data for `os_type`. Must be a string:", `os_type`))
        }
        self$`os_type` <- `os_type`
      }
      if (!is.null(`monthly_price`)) {
        if (!(is.character(`monthly_price`) && length(`monthly_price`) == 1)) {
          stop(paste("Error! Invalid data for `monthly_price`. Must be a string:", `monthly_price`))
        }
        self$`monthly_price` <- `monthly_price`
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
    #' @return BuyItNowServerOrder200ResponseCpInner as a base R list.
    #' @examples
    #' # convert array of BuyItNowServerOrder200ResponseCpInner (x) to a data frame
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
    #' Convert BuyItNowServerOrder200ResponseCpInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BuyItNowServerOrder200ResponseCpInnerObject <- list()
      if (!is.null(self$`id`)) {
        BuyItNowServerOrder200ResponseCpInnerObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`short_desc`)) {
        BuyItNowServerOrder200ResponseCpInnerObject[["short_desc"]] <-
          self$`short_desc`
      }
      if (!is.null(self$`long_desc`)) {
        BuyItNowServerOrder200ResponseCpInnerObject[["long_desc"]] <-
          self$`long_desc`
      }
      if (!is.null(self$`os_type`)) {
        BuyItNowServerOrder200ResponseCpInnerObject[["os_type"]] <-
          self$`os_type`
      }
      if (!is.null(self$`monthly_price`)) {
        BuyItNowServerOrder200ResponseCpInnerObject[["monthly_price"]] <-
          self$`monthly_price`
      }
      return(BuyItNowServerOrder200ResponseCpInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BuyItNowServerOrder200ResponseCpInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of BuyItNowServerOrder200ResponseCpInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`short_desc`)) {
        self$`short_desc` <- this_object$`short_desc`
      }
      if (!is.null(this_object$`long_desc`)) {
        self$`long_desc` <- this_object$`long_desc`
      }
      if (!is.null(this_object$`os_type`)) {
        self$`os_type` <- this_object$`os_type`
      }
      if (!is.null(this_object$`monthly_price`)) {
        self$`monthly_price` <- this_object$`monthly_price`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BuyItNowServerOrder200ResponseCpInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BuyItNowServerOrder200ResponseCpInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of BuyItNowServerOrder200ResponseCpInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`short_desc` <- this_object$`short_desc`
      self$`long_desc` <- this_object$`long_desc`
      self$`os_type` <- this_object$`os_type`
      self$`monthly_price` <- this_object$`monthly_price`
      self
    },

    #' @description
    #' Validate JSON input with respect to BuyItNowServerOrder200ResponseCpInner and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BuyItNowServerOrder200ResponseCpInner
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
# BuyItNowServerOrder200ResponseCpInner$unlock()
#
## Below is an example to define the print function
# BuyItNowServerOrder200ResponseCpInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BuyItNowServerOrder200ResponseCpInner$lock()

