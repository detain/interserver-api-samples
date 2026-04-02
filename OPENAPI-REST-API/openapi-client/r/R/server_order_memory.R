#' Create a new ServerOrderMemory
#'
#' @description
#' A memory (RAM) option available when ordering a dedicated server.
#'
#' @docType class
#' @title ServerOrderMemory
#' @description ServerOrderMemory Class
#' @format An \code{R6Class} generator object
#' @field id Memory ID. character [optional]
#' @field price Memory price. character [optional]
#' @field img Memory image. character [optional]
#' @field short_desc Short description of the memory. character [optional]
#' @field long_desc Long description of the memory. character [optional]
#' @field manu Manufacturer information. character [optional]
#' @field size Memory size. character [optional]
#' @field type Memory type. character [optional]
#' @field hidden Hidden status. character [optional]
#' @field monthly_price Monthly price. integer [optional]
#' @field drive_type Drive type. character [optional]
#' @field monthly_price_display Display of monthly memory price. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderMemory <- R6::R6Class(
  "ServerOrderMemory",
  public = list(
    `id` = NULL,
    `price` = NULL,
    `img` = NULL,
    `short_desc` = NULL,
    `long_desc` = NULL,
    `manu` = NULL,
    `size` = NULL,
    `type` = NULL,
    `hidden` = NULL,
    `monthly_price` = NULL,
    `drive_type` = NULL,
    `monthly_price_display` = NULL,

    #' @description
    #' Initialize a new ServerOrderMemory class.
    #'
    #' @param id Memory ID.
    #' @param price Memory price.
    #' @param img Memory image.
    #' @param short_desc Short description of the memory.
    #' @param long_desc Long description of the memory.
    #' @param manu Manufacturer information.
    #' @param size Memory size.
    #' @param type Memory type.
    #' @param hidden Hidden status.
    #' @param monthly_price Monthly price.
    #' @param drive_type Drive type.
    #' @param monthly_price_display Display of monthly memory price.
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `price` = NULL, `img` = NULL, `short_desc` = NULL, `long_desc` = NULL, `manu` = NULL, `size` = NULL, `type` = NULL, `hidden` = NULL, `monthly_price` = NULL, `drive_type` = NULL, `monthly_price_display` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.character(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", `id`))
        }
        self$`id` <- `id`
      }
      if (!is.null(`price`)) {
        if (!(is.character(`price`) && length(`price`) == 1)) {
          stop(paste("Error! Invalid data for `price`. Must be a string:", `price`))
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
      if (!is.null(`manu`)) {
        if (!(is.character(`manu`) && length(`manu`) == 1)) {
          stop(paste("Error! Invalid data for `manu`. Must be a string:", `manu`))
        }
        self$`manu` <- `manu`
      }
      if (!is.null(`size`)) {
        if (!(is.character(`size`) && length(`size`) == 1)) {
          stop(paste("Error! Invalid data for `size`. Must be a string:", `size`))
        }
        self$`size` <- `size`
      }
      if (!is.null(`type`)) {
        if (!(is.character(`type`) && length(`type`) == 1)) {
          stop(paste("Error! Invalid data for `type`. Must be a string:", `type`))
        }
        self$`type` <- `type`
      }
      if (!is.null(`hidden`)) {
        if (!(is.character(`hidden`) && length(`hidden`) == 1)) {
          stop(paste("Error! Invalid data for `hidden`. Must be a string:", `hidden`))
        }
        self$`hidden` <- `hidden`
      }
      if (!is.null(`monthly_price`)) {
        if (!(is.numeric(`monthly_price`) && length(`monthly_price`) == 1)) {
          stop(paste("Error! Invalid data for `monthly_price`. Must be an integer:", `monthly_price`))
        }
        self$`monthly_price` <- `monthly_price`
      }
      if (!is.null(`drive_type`)) {
        if (!(is.character(`drive_type`) && length(`drive_type`) == 1)) {
          stop(paste("Error! Invalid data for `drive_type`. Must be a string:", `drive_type`))
        }
        self$`drive_type` <- `drive_type`
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
    #' @return ServerOrderMemory as a base R list.
    #' @examples
    #' # convert array of ServerOrderMemory (x) to a data frame
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
    #' Convert ServerOrderMemory to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderMemoryObject <- list()
      if (!is.null(self$`id`)) {
        ServerOrderMemoryObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`price`)) {
        ServerOrderMemoryObject[["price"]] <-
          self$`price`
      }
      if (!is.null(self$`img`)) {
        ServerOrderMemoryObject[["img"]] <-
          self$`img`
      }
      if (!is.null(self$`short_desc`)) {
        ServerOrderMemoryObject[["short_desc"]] <-
          self$`short_desc`
      }
      if (!is.null(self$`long_desc`)) {
        ServerOrderMemoryObject[["long_desc"]] <-
          self$`long_desc`
      }
      if (!is.null(self$`manu`)) {
        ServerOrderMemoryObject[["manu"]] <-
          self$`manu`
      }
      if (!is.null(self$`size`)) {
        ServerOrderMemoryObject[["size"]] <-
          self$`size`
      }
      if (!is.null(self$`type`)) {
        ServerOrderMemoryObject[["type"]] <-
          self$`type`
      }
      if (!is.null(self$`hidden`)) {
        ServerOrderMemoryObject[["hidden"]] <-
          self$`hidden`
      }
      if (!is.null(self$`monthly_price`)) {
        ServerOrderMemoryObject[["monthly_price"]] <-
          self$`monthly_price`
      }
      if (!is.null(self$`drive_type`)) {
        ServerOrderMemoryObject[["drive_type"]] <-
          self$`drive_type`
      }
      if (!is.null(self$`monthly_price_display`)) {
        ServerOrderMemoryObject[["monthly_price_display"]] <-
          self$`monthly_price_display`
      }
      return(ServerOrderMemoryObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderMemory
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderMemory
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
      if (!is.null(this_object$`manu`)) {
        self$`manu` <- this_object$`manu`
      }
      if (!is.null(this_object$`size`)) {
        self$`size` <- this_object$`size`
      }
      if (!is.null(this_object$`type`)) {
        self$`type` <- this_object$`type`
      }
      if (!is.null(this_object$`hidden`)) {
        self$`hidden` <- this_object$`hidden`
      }
      if (!is.null(this_object$`monthly_price`)) {
        self$`monthly_price` <- this_object$`monthly_price`
      }
      if (!is.null(this_object$`drive_type`)) {
        self$`drive_type` <- this_object$`drive_type`
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
    #' @return ServerOrderMemory in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderMemory
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderMemory
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`price` <- this_object$`price`
      self$`img` <- this_object$`img`
      self$`short_desc` <- this_object$`short_desc`
      self$`long_desc` <- this_object$`long_desc`
      self$`manu` <- this_object$`manu`
      self$`size` <- this_object$`size`
      self$`type` <- this_object$`type`
      self$`hidden` <- this_object$`hidden`
      self$`monthly_price` <- this_object$`monthly_price`
      self$`drive_type` <- this_object$`drive_type`
      self$`monthly_price_display` <- this_object$`monthly_price_display`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderMemory and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderMemory
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
# ServerOrderMemory$unlock()
#
## Below is an example to define the print function
# ServerOrderMemory$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderMemory$lock()

