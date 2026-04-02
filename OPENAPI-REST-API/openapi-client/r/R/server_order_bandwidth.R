#' Create a new ServerOrderBandwidth
#'
#' @description
#' A bandwidth option available when ordering a dedicated server.
#'
#' @docType class
#' @title ServerOrderBandwidth
#' @description ServerOrderBandwidth Class
#' @format An \code{R6Class} generator object
#' @field id Bandwidth ID. character [optional]
#' @field price Bandwidth price. integer [optional]
#' @field img Bandwidth image. character [optional]
#' @field short_desc Short description of the bandwidth. character [optional]
#' @field long_desc Long description of the bandwidth. character [optional]
#' @field type Bandwidth type. character [optional]
#' @field qty Quantity of bandwidth. character [optional]
#' @field active Active status. character [optional]
#' @field monthly_price Monthly price. integer [optional]
#' @field price_display Display of bandwidth price. character [optional]
#' @field monthly_price_display Display of monthly bandwidth price. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderBandwidth <- R6::R6Class(
  "ServerOrderBandwidth",
  public = list(
    `id` = NULL,
    `price` = NULL,
    `img` = NULL,
    `short_desc` = NULL,
    `long_desc` = NULL,
    `type` = NULL,
    `qty` = NULL,
    `active` = NULL,
    `monthly_price` = NULL,
    `price_display` = NULL,
    `monthly_price_display` = NULL,

    #' @description
    #' Initialize a new ServerOrderBandwidth class.
    #'
    #' @param id Bandwidth ID.
    #' @param price Bandwidth price.
    #' @param img Bandwidth image.
    #' @param short_desc Short description of the bandwidth.
    #' @param long_desc Long description of the bandwidth.
    #' @param type Bandwidth type.
    #' @param qty Quantity of bandwidth.
    #' @param active Active status.
    #' @param monthly_price Monthly price.
    #' @param price_display Display of bandwidth price.
    #' @param monthly_price_display Display of monthly bandwidth price.
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `price` = NULL, `img` = NULL, `short_desc` = NULL, `long_desc` = NULL, `type` = NULL, `qty` = NULL, `active` = NULL, `monthly_price` = NULL, `price_display` = NULL, `monthly_price_display` = NULL, ...) {
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
      if (!is.null(`type`)) {
        if (!(is.character(`type`) && length(`type`) == 1)) {
          stop(paste("Error! Invalid data for `type`. Must be a string:", `type`))
        }
        self$`type` <- `type`
      }
      if (!is.null(`qty`)) {
        if (!(is.character(`qty`) && length(`qty`) == 1)) {
          stop(paste("Error! Invalid data for `qty`. Must be a string:", `qty`))
        }
        self$`qty` <- `qty`
      }
      if (!is.null(`active`)) {
        if (!(is.character(`active`) && length(`active`) == 1)) {
          stop(paste("Error! Invalid data for `active`. Must be a string:", `active`))
        }
        self$`active` <- `active`
      }
      if (!is.null(`monthly_price`)) {
        if (!(is.numeric(`monthly_price`) && length(`monthly_price`) == 1)) {
          stop(paste("Error! Invalid data for `monthly_price`. Must be an integer:", `monthly_price`))
        }
        self$`monthly_price` <- `monthly_price`
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
    #' @return ServerOrderBandwidth as a base R list.
    #' @examples
    #' # convert array of ServerOrderBandwidth (x) to a data frame
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
    #' Convert ServerOrderBandwidth to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderBandwidthObject <- list()
      if (!is.null(self$`id`)) {
        ServerOrderBandwidthObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`price`)) {
        ServerOrderBandwidthObject[["price"]] <-
          self$`price`
      }
      if (!is.null(self$`img`)) {
        ServerOrderBandwidthObject[["img"]] <-
          self$`img`
      }
      if (!is.null(self$`short_desc`)) {
        ServerOrderBandwidthObject[["short_desc"]] <-
          self$`short_desc`
      }
      if (!is.null(self$`long_desc`)) {
        ServerOrderBandwidthObject[["long_desc"]] <-
          self$`long_desc`
      }
      if (!is.null(self$`type`)) {
        ServerOrderBandwidthObject[["type"]] <-
          self$`type`
      }
      if (!is.null(self$`qty`)) {
        ServerOrderBandwidthObject[["qty"]] <-
          self$`qty`
      }
      if (!is.null(self$`active`)) {
        ServerOrderBandwidthObject[["active"]] <-
          self$`active`
      }
      if (!is.null(self$`monthly_price`)) {
        ServerOrderBandwidthObject[["monthly_price"]] <-
          self$`monthly_price`
      }
      if (!is.null(self$`price_display`)) {
        ServerOrderBandwidthObject[["price_display"]] <-
          self$`price_display`
      }
      if (!is.null(self$`monthly_price_display`)) {
        ServerOrderBandwidthObject[["monthly_price_display"]] <-
          self$`monthly_price_display`
      }
      return(ServerOrderBandwidthObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderBandwidth
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderBandwidth
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
      if (!is.null(this_object$`type`)) {
        self$`type` <- this_object$`type`
      }
      if (!is.null(this_object$`qty`)) {
        self$`qty` <- this_object$`qty`
      }
      if (!is.null(this_object$`active`)) {
        self$`active` <- this_object$`active`
      }
      if (!is.null(this_object$`monthly_price`)) {
        self$`monthly_price` <- this_object$`monthly_price`
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
    #' @return ServerOrderBandwidth in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderBandwidth
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderBandwidth
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`price` <- this_object$`price`
      self$`img` <- this_object$`img`
      self$`short_desc` <- this_object$`short_desc`
      self$`long_desc` <- this_object$`long_desc`
      self$`type` <- this_object$`type`
      self$`qty` <- this_object$`qty`
      self$`active` <- this_object$`active`
      self$`monthly_price` <- this_object$`monthly_price`
      self$`price_display` <- this_object$`price_display`
      self$`monthly_price_display` <- this_object$`monthly_price_display`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderBandwidth and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderBandwidth
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
# ServerOrderBandwidth$unlock()
#
## Below is an example to define the print function
# ServerOrderBandwidth$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderBandwidth$lock()

