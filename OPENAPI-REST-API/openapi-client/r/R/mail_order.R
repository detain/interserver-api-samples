#' Create a new MailOrder
#'
#' @description
#' A mail order record
#'
#' @docType class
#' @title MailOrder
#' @description MailOrder Class
#' @format An \code{R6Class} generator object
#' @field id The ID of the order. integer
#' @field status The order status. character
#' @field username The username to use for this order. character
#' @field comment Optional order comment. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailOrder <- R6::R6Class(
  "MailOrder",
  public = list(
    `id` = NULL,
    `status` = NULL,
    `username` = NULL,
    `comment` = NULL,

    #' @description
    #' Initialize a new MailOrder class.
    #'
    #' @param id The ID of the order.
    #' @param status The order status.
    #' @param username The username to use for this order.
    #' @param comment Optional order comment.
    #' @param ... Other optional arguments.
    initialize = function(`id`, `status`, `username`, `comment` = NULL, ...) {
      if (!missing(`id`)) {
        if (!(is.numeric(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be an integer:", `id`))
        }
        self$`id` <- `id`
      }
      if (!missing(`status`)) {
        if (!(is.character(`status`) && length(`status`) == 1)) {
          stop(paste("Error! Invalid data for `status`. Must be a string:", `status`))
        }
        self$`status` <- `status`
      }
      if (!missing(`username`)) {
        if (!(is.character(`username`) && length(`username`) == 1)) {
          stop(paste("Error! Invalid data for `username`. Must be a string:", `username`))
        }
        self$`username` <- `username`
      }
      if (!is.null(`comment`)) {
        if (!(is.character(`comment`) && length(`comment`) == 1)) {
          stop(paste("Error! Invalid data for `comment`. Must be a string:", `comment`))
        }
        self$`comment` <- `comment`
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
    #' @return MailOrder as a base R list.
    #' @examples
    #' # convert array of MailOrder (x) to a data frame
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
    #' Convert MailOrder to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailOrderObject <- list()
      if (!is.null(self$`id`)) {
        MailOrderObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`status`)) {
        MailOrderObject[["status"]] <-
          self$`status`
      }
      if (!is.null(self$`username`)) {
        MailOrderObject[["username"]] <-
          self$`username`
      }
      if (!is.null(self$`comment`)) {
        MailOrderObject[["comment"]] <-
          self$`comment`
      }
      return(MailOrderObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailOrder
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`status`)) {
        self$`status` <- this_object$`status`
      }
      if (!is.null(this_object$`username`)) {
        self$`username` <- this_object$`username`
      }
      if (!is.null(this_object$`comment`)) {
        self$`comment` <- this_object$`comment`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailOrder in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailOrder
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`status` <- this_object$`status`
      self$`username` <- this_object$`username`
      self$`comment` <- this_object$`comment`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailOrder and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `id`
      if (!is.null(input_json$`id`)) {
        if (!(is.numeric(input_json$`id`) && length(input_json$`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be an integer:", input_json$`id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailOrder: the required field `id` is missing."))
      }
      # check the required field `status`
      if (!is.null(input_json$`status`)) {
        if (!(is.character(input_json$`status`) && length(input_json$`status`) == 1)) {
          stop(paste("Error! Invalid data for `status`. Must be a string:", input_json$`status`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailOrder: the required field `status` is missing."))
      }
      # check the required field `username`
      if (!is.null(input_json$`username`)) {
        if (!(is.character(input_json$`username`) && length(input_json$`username`) == 1)) {
          stop(paste("Error! Invalid data for `username`. Must be a string:", input_json$`username`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailOrder: the required field `username` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailOrder
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `id` is null
      if (is.null(self$`id`)) {
        return(FALSE)
      }

      # check if the required `status` is null
      if (is.null(self$`status`)) {
        return(FALSE)
      }

      # check if the required `username` is null
      if (is.null(self$`username`)) {
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
      # check if the required `id` is null
      if (is.null(self$`id`)) {
        invalid_fields["id"] <- "Non-nullable required field `id` cannot be null."
      }

      # check if the required `status` is null
      if (is.null(self$`status`)) {
        invalid_fields["status"] <- "Non-nullable required field `status` cannot be null."
      }

      # check if the required `username` is null
      if (is.null(self$`username`)) {
        invalid_fields["username"] <- "Non-nullable required field `username` cannot be null."
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
# MailOrder$unlock()
#
## Below is an example to define the print function
# MailOrder$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailOrder$lock()

