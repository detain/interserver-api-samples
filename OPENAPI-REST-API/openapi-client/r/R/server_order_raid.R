#' Create a new ServerOrderRAID
#'
#' @description
#' A RAID configuration option available when ordering a dedicated server.
#'
#' @docType class
#' @title ServerOrderRAID
#' @description ServerOrderRAID Class
#' @format An \code{R6Class} generator object
#' @field id RAID ID. character [optional]
#' @field price RAID price. integer [optional]
#' @field img RAID image. character [optional]
#' @field short_desc Short description of the RAID. character [optional]
#' @field long_desc Long description of the RAID. character [optional]
#' @field monthly_price Monthly price. integer [optional]
#' @field active Active status. character [optional]
#' @field price_display Display of RAID price. character [optional]
#' @field monthly_price_display Display of monthly RAID price. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderRAID <- R6::R6Class(
  "ServerOrderRAID",
  public = list(
    `id` = NULL,
    `price` = NULL,
    `img` = NULL,
    `short_desc` = NULL,
    `long_desc` = NULL,
    `monthly_price` = NULL,
    `active` = NULL,
    `price_display` = NULL,
    `monthly_price_display` = NULL,

    #' @description
    #' Initialize a new ServerOrderRAID class.
    #'
    #' @param id RAID ID.
    #' @param price RAID price.
    #' @param img RAID image.
    #' @param short_desc Short description of the RAID.
    #' @param long_desc Long description of the RAID.
    #' @param monthly_price Monthly price.
    #' @param active Active status.
    #' @param price_display Display of RAID price.
    #' @param monthly_price_display Display of monthly RAID price.
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `price` = NULL, `img` = NULL, `short_desc` = NULL, `long_desc` = NULL, `monthly_price` = NULL, `active` = NULL, `price_display` = NULL, `monthly_price_display` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.character(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", `id`))
        }
        self$`id` <- `id`
      }
      if (!is.null(`price`)) {
        if (!(is.numeric(`price`) && length(`price`) == 1)) {
          stop(paste("Error! Invalid data for `price`. Must be an integer:", `price`))
        }
        self$`price` <- `price`
      }
      if (!is.null(`img`)) {
        if (!(is.character(`img`) && length(`img`) == 1)) {
          stop(paste("Error! Invalid data for `img`. Must be a string:", `img`))
        }
        self$`img` <- `img`
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
      if (!is.null(`monthly_price`)) {
        if (!(is.numeric(`monthly_price`) && length(`monthly_price`) == 1)) {
          stop(paste("Error! Invalid data for `monthly_price`. Must be an integer:", `monthly_price`))
        }
        self$`monthly_price` <- `monthly_price`
      }
      if (!is.null(`active`)) {
        if (!(is.character(`active`) && length(`active`) == 1)) {
          stop(paste("Error! Invalid data for `active`. Must be a string:", `active`))
        }
        self$`active` <- `active`
      }
      if (!is.null(`price_display`)) {
        if (!(is.character(`price_display`) && length(`price_display`) == 1)) {
          stop(paste("Error! Invalid data for `price_display`. Must be a string:", `price_display`))
        }
        self$`price_display` <- `price_display`
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
    #' @return ServerOrderRAID as a base R list.
    #' @examples
    #' # convert array of ServerOrderRAID (x) to a data frame
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
    #' Convert ServerOrderRAID to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderRAIDObject <- list()
      if (!is.null(self$`id`)) {
        ServerOrderRAIDObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`price`)) {
        ServerOrderRAIDObject[["price"]] <-
          self$`price`
      }
      if (!is.null(self$`img`)) {
        ServerOrderRAIDObject[["img"]] <-
          self$`img`
      }
      if (!is.null(self$`short_desc`)) {
        ServerOrderRAIDObject[["short_desc"]] <-
          self$`short_desc`
      }
      if (!is.null(self$`long_desc`)) {
        ServerOrderRAIDObject[["long_desc"]] <-
          self$`long_desc`
      }
      if (!is.null(self$`monthly_price`)) {
        ServerOrderRAIDObject[["monthly_price"]] <-
          self$`monthly_price`
      }
      if (!is.null(self$`active`)) {
        ServerOrderRAIDObject[["active"]] <-
          self$`active`
      }
      if (!is.null(self$`price_display`)) {
        ServerOrderRAIDObject[["price_display"]] <-
          self$`price_display`
      }
      if (!is.null(self$`monthly_price_display`)) {
        ServerOrderRAIDObject[["monthly_price_display"]] <-
          self$`monthly_price_display`
      }
      return(ServerOrderRAIDObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderRAID
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderRAID
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`price`)) {
        self$`price` <- this_object$`price`
      }
      if (!is.null(this_object$`img`)) {
        self$`img` <- this_object$`img`
      }
      if (!is.null(this_object$`short_desc`)) {
        self$`short_desc` <- this_object$`short_desc`
      }
      if (!is.null(this_object$`long_desc`)) {
        self$`long_desc` <- this_object$`long_desc`
      }
      if (!is.null(this_object$`monthly_price`)) {
        self$`monthly_price` <- this_object$`monthly_price`
      }
      if (!is.null(this_object$`active`)) {
        self$`active` <- this_object$`active`
      }
      if (!is.null(this_object$`price_display`)) {
        self$`price_display` <- this_object$`price_display`
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
    #' @return ServerOrderRAID in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderRAID
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderRAID
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`price` <- this_object$`price`
      self$`img` <- this_object$`img`
      self$`short_desc` <- this_object$`short_desc`
      self$`long_desc` <- this_object$`long_desc`
      self$`monthly_price` <- this_object$`monthly_price`
      self$`active` <- this_object$`active`
      self$`price_display` <- this_object$`price_display`
      self$`monthly_price_display` <- this_object$`monthly_price_display`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderRAID and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderRAID
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
# ServerOrderRAID$unlock()
#
## Below is an example to define the print function
# ServerOrderRAID$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderRAID$lock()

