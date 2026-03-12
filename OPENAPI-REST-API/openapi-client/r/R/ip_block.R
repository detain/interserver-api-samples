#' Create a new IpBlock
#'
#' @description
#' An IP address block option available for a dedicated server configuration.
#'
#' @docType class
#' @title IpBlock
#' @description IpBlock Class
#' @format An \code{R6Class} generator object
#' @field id  integer [optional]
#' @field short_desc  character [optional]
#' @field qty  character [optional]
#' @field monthly_price  numeric [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
IpBlock <- R6::R6Class(
  "IpBlock",
  public = list(
    `id` = NULL,
    `short_desc` = NULL,
    `qty` = NULL,
    `monthly_price` = NULL,

    #' @description
    #' Initialize a new IpBlock class.
    #'
    #' @param id id
    #' @param short_desc short_desc
    #' @param qty qty
    #' @param monthly_price monthly_price
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `short_desc` = NULL, `qty` = NULL, `monthly_price` = NULL, ...) {
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
      if (!is.null(`qty`)) {
        if (!(is.character(`qty`) && length(`qty`) == 1)) {
          stop(paste("Error! Invalid data for `qty`. Must be a string:", `qty`))
        }
        self$`qty` <- `qty`
      }
      if (!is.null(`monthly_price`)) {
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
    #' @return IpBlock as a base R list.
    #' @examples
    #' # convert array of IpBlock (x) to a data frame
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
    #' Convert IpBlock to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      IpBlockObject <- list()
      if (!is.null(self$`id`)) {
        IpBlockObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`short_desc`)) {
        IpBlockObject[["short_desc"]] <-
          self$`short_desc`
      }
      if (!is.null(self$`qty`)) {
        IpBlockObject[["qty"]] <-
          self$`qty`
      }
      if (!is.null(self$`monthly_price`)) {
        IpBlockObject[["monthly_price"]] <-
          self$`monthly_price`
      }
      return(IpBlockObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of IpBlock
    #'
    #' @param input_json the JSON input
    #' @return the instance of IpBlock
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`short_desc`)) {
        self$`short_desc` <- this_object$`short_desc`
      }
      if (!is.null(this_object$`qty`)) {
        self$`qty` <- this_object$`qty`
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
    #' @return IpBlock in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of IpBlock
    #'
    #' @param input_json the JSON input
    #' @return the instance of IpBlock
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`short_desc` <- this_object$`short_desc`
      self$`qty` <- this_object$`qty`
      self$`monthly_price` <- this_object$`monthly_price`
      self
    },

    #' @description
    #' Validate JSON input with respect to IpBlock and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of IpBlock
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
# IpBlock$unlock()
#
## Below is an example to define the print function
# IpBlock$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# IpBlock$lock()

