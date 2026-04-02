#' Create a new MemoryOption
#'
#' @description
#' A memory (RAM) upgrade option available for a dedicated server configuration.
#'
#' @docType class
#' @title MemoryOption
#' @description MemoryOption Class
#' @format An \code{R6Class} generator object
#' @field id  integer [optional]
#' @field short_desc  character [optional]
#' @field monthly_price  numeric [optional]
#' @field monthly_price_display  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MemoryOption <- R6::R6Class(
  "MemoryOption",
  public = list(
    `id` = NULL,
    `short_desc` = NULL,
    `monthly_price` = NULL,
    `monthly_price_display` = NULL,

    #' @description
    #' Initialize a new MemoryOption class.
    #'
    #' @param id id
    #' @param short_desc short_desc
    #' @param monthly_price monthly_price
    #' @param monthly_price_display monthly_price_display
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `short_desc` = NULL, `monthly_price` = NULL, `monthly_price_display` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.numeric(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be an integer:", `id`))
        }
        self$`id` <- `id`
      }
      if (!is.null(`short_desc`)) {
        if (!(is.character(`short_desc`) && length(`short_desc`) == 1)) {
          stop(paste("Error! Invalid data for `short_desc`. Must be a string:", `short_desc`))
        }
        self$`short_desc` <- `short_desc`
      }
      if (!is.null(`monthly_price`)) {
        self$`monthly_price` <- `monthly_price`
      }
      if (!is.null(`monthly_price_display`)) {
        if (!(is.character(`monthly_price_display`) && length(`monthly_price_display`) == 1)) {
          stop(paste("Error! Invalid data for `monthly_price_display`. Must be a string:", `monthly_price_display`))
        }
        self$`monthly_price_display` <- `monthly_price_display`
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
    #' @return MemoryOption as a base R list.
    #' @examples
    #' # convert array of MemoryOption (x) to a data frame
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
    #' Convert MemoryOption to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MemoryOptionObject <- list()
      if (!is.null(self$`id`)) {
        MemoryOptionObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`short_desc`)) {
        MemoryOptionObject[["short_desc"]] <-
          self$`short_desc`
      }
      if (!is.null(self$`monthly_price`)) {
        MemoryOptionObject[["monthly_price"]] <-
          self$`monthly_price`
      }
      if (!is.null(self$`monthly_price_display`)) {
        MemoryOptionObject[["monthly_price_display"]] <-
          self$`monthly_price_display`
      }
      return(MemoryOptionObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MemoryOption
    #'
    #' @param input_json the JSON input
    #' @return the instance of MemoryOption
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`short_desc`)) {
        self$`short_desc` <- this_object$`short_desc`
      }
      if (!is.null(this_object$`monthly_price`)) {
        self$`monthly_price` <- this_object$`monthly_price`
      }
      if (!is.null(this_object$`monthly_price_display`)) {
        self$`monthly_price_display` <- this_object$`monthly_price_display`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MemoryOption in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MemoryOption
    #'
    #' @param input_json the JSON input
    #' @return the instance of MemoryOption
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`short_desc` <- this_object$`short_desc`
      self$`monthly_price` <- this_object$`monthly_price`
      self$`monthly_price_display` <- this_object$`monthly_price_display`
      self
    },

    #' @description
    #' Validate JSON input with respect to MemoryOption and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MemoryOption
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
# MemoryOption$unlock()
#
## Below is an example to define the print function
# MemoryOption$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MemoryOption$lock()

