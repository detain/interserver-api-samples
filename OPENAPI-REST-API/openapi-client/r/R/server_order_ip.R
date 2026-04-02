#' Create a new ServerOrderIP
#'
#' @description
#' An IP block option available when ordering a dedicated server.
#'
#' @docType class
#' @title ServerOrderIP
#' @description ServerOrderIP Class
#' @format An \code{R6Class} generator object
#' @field id IP ID. character [optional]
#' @field price IP price. integer [optional]
#' @field img IP image. character [optional]
#' @field short_desc Short description of the IP. character [optional]
#' @field long_desc Long description of the IP. character [optional]
#' @field qty Quantity of IPs. character [optional]
#' @field monthly_price Monthly price. integer [optional]
#' @field price_display Display of IP price. character [optional]
#' @field monthly_price_display Display of monthly IP price. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerOrderIP <- R6::R6Class(
  "ServerOrderIP",
  public = list(
    `id` = NULL,
    `price` = NULL,
    `img` = NULL,
    `short_desc` = NULL,
    `long_desc` = NULL,
    `qty` = NULL,
    `monthly_price` = NULL,
    `price_display` = NULL,
    `monthly_price_display` = NULL,

    #' @description
    #' Initialize a new ServerOrderIP class.
    #'
    #' @param id IP ID.
    #' @param price IP price.
    #' @param img IP image.
    #' @param short_desc Short description of the IP.
    #' @param long_desc Long description of the IP.
    #' @param qty Quantity of IPs.
    #' @param monthly_price Monthly price.
    #' @param price_display Display of IP price.
    #' @param monthly_price_display Display of monthly IP price.
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `price` = NULL, `img` = NULL, `short_desc` = NULL, `long_desc` = NULL, `qty` = NULL, `monthly_price` = NULL, `price_display` = NULL, `monthly_price_display` = NULL, ...) {
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
      if (!is.null(`qty`)) {
        if (!(is.character(`qty`) && length(`qty`) == 1)) {
          stop(paste("Error! Invalid data for `qty`. Must be a string:", `qty`))
        }
        self$`qty` <- `qty`
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
    #' @return ServerOrderIP as a base R list.
    #' @examples
    #' # convert array of ServerOrderIP (x) to a data frame
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
    #' Convert ServerOrderIP to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerOrderIPObject <- list()
      if (!is.null(self$`id`)) {
        ServerOrderIPObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`price`)) {
        ServerOrderIPObject[["price"]] <-
          self$`price`
      }
      if (!is.null(self$`img`)) {
        ServerOrderIPObject[["img"]] <-
          self$`img`
      }
      if (!is.null(self$`short_desc`)) {
        ServerOrderIPObject[["short_desc"]] <-
          self$`short_desc`
      }
      if (!is.null(self$`long_desc`)) {
        ServerOrderIPObject[["long_desc"]] <-
          self$`long_desc`
      }
      if (!is.null(self$`qty`)) {
        ServerOrderIPObject[["qty"]] <-
          self$`qty`
      }
      if (!is.null(self$`monthly_price`)) {
        ServerOrderIPObject[["monthly_price"]] <-
          self$`monthly_price`
      }
      if (!is.null(self$`price_display`)) {
        ServerOrderIPObject[["price_display"]] <-
          self$`price_display`
      }
      if (!is.null(self$`monthly_price_display`)) {
        ServerOrderIPObject[["monthly_price_display"]] <-
          self$`monthly_price_display`
      }
      return(ServerOrderIPObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderIP
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderIP
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
      if (!is.null(this_object$`qty`)) {
        self$`qty` <- this_object$`qty`
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
    #' @return ServerOrderIP in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerOrderIP
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerOrderIP
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`price` <- this_object$`price`
      self$`img` <- this_object$`img`
      self$`short_desc` <- this_object$`short_desc`
      self$`long_desc` <- this_object$`long_desc`
      self$`qty` <- this_object$`qty`
      self$`monthly_price` <- this_object$`monthly_price`
      self$`price_display` <- this_object$`price_display`
      self$`monthly_price_display` <- this_object$`monthly_price_display`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerOrderIP and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerOrderIP
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
# ServerOrderIP$unlock()
#
## Below is an example to define the print function
# ServerOrderIP$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerOrderIP$lock()

