#' Create a new WebsiteRow
#'
#' @description
#' A result row from the `Webhosting` `GET` request.
#'
#' @docType class
#' @title WebsiteRow
#' @description WebsiteRow Class
#' @format An \code{R6Class} generator object
#' @field website_id The id of the website. character
#' @field website_hostname The hostname of the website. character
#' @field repeat_invoices_cost The repeat invoices cost of the website. character
#' @field website_status The status of the website. character
#' @field services_name The services name of the website. character
#' @field website_comment The comment of the website. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsiteRow <- R6::R6Class(
  "WebsiteRow",
  public = list(
    `website_id` = NULL,
    `website_hostname` = NULL,
    `repeat_invoices_cost` = NULL,
    `website_status` = NULL,
    `services_name` = NULL,
    `website_comment` = NULL,

    #' @description
    #' Initialize a new WebsiteRow class.
    #'
    #' @param website_id The id of the website.
    #' @param website_hostname The hostname of the website.
    #' @param repeat_invoices_cost The repeat invoices cost of the website.
    #' @param website_status The status of the website.
    #' @param services_name The services name of the website.
    #' @param website_comment The comment of the website.
    #' @param ... Other optional arguments.
    initialize = function(`website_id`, `website_hostname`, `repeat_invoices_cost`, `website_status`, `services_name`, `website_comment`, ...) {
      if (!missing(`website_id`)) {
        if (!(is.character(`website_id`) && length(`website_id`) == 1)) {
          stop(paste("Error! Invalid data for `website_id`. Must be a string:", `website_id`))
        }
        self$`website_id` <- `website_id`
      }
      if (!missing(`website_hostname`)) {
        if (!(is.character(`website_hostname`) && length(`website_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `website_hostname`. Must be a string:", `website_hostname`))
        }
        self$`website_hostname` <- `website_hostname`
      }
      if (!missing(`repeat_invoices_cost`)) {
        if (!(is.character(`repeat_invoices_cost`) && length(`repeat_invoices_cost`) == 1)) {
          stop(paste("Error! Invalid data for `repeat_invoices_cost`. Must be a string:", `repeat_invoices_cost`))
        }
        self$`repeat_invoices_cost` <- `repeat_invoices_cost`
      }
      if (!missing(`website_status`)) {
        if (!(is.character(`website_status`) && length(`website_status`) == 1)) {
          stop(paste("Error! Invalid data for `website_status`. Must be a string:", `website_status`))
        }
        self$`website_status` <- `website_status`
      }
      if (!missing(`services_name`)) {
        if (!(is.character(`services_name`) && length(`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", `services_name`))
        }
        self$`services_name` <- `services_name`
      }
      if (!missing(`website_comment`)) {
        if (!(is.character(`website_comment`) && length(`website_comment`) == 1)) {
          stop(paste("Error! Invalid data for `website_comment`. Must be a string:", `website_comment`))
        }
        self$`website_comment` <- `website_comment`
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
    #' @return WebsiteRow as a base R list.
    #' @examples
    #' # convert array of WebsiteRow (x) to a data frame
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
    #' Convert WebsiteRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsiteRowObject <- list()
      if (!is.null(self$`website_id`)) {
        WebsiteRowObject[["website_id"]] <-
          self$`website_id`
      }
      if (!is.null(self$`website_hostname`)) {
        WebsiteRowObject[["website_hostname"]] <-
          self$`website_hostname`
      }
      if (!is.null(self$`repeat_invoices_cost`)) {
        WebsiteRowObject[["repeat_invoices_cost"]] <-
          self$`repeat_invoices_cost`
      }
      if (!is.null(self$`website_status`)) {
        WebsiteRowObject[["website_status"]] <-
          self$`website_status`
      }
      if (!is.null(self$`services_name`)) {
        WebsiteRowObject[["services_name"]] <-
          self$`services_name`
      }
      if (!is.null(self$`website_comment`)) {
        WebsiteRowObject[["website_comment"]] <-
          self$`website_comment`
      }
      return(WebsiteRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`website_id`)) {
        self$`website_id` <- this_object$`website_id`
      }
      if (!is.null(this_object$`website_hostname`)) {
        self$`website_hostname` <- this_object$`website_hostname`
      }
      if (!is.null(this_object$`repeat_invoices_cost`)) {
        self$`repeat_invoices_cost` <- this_object$`repeat_invoices_cost`
      }
      if (!is.null(this_object$`website_status`)) {
        self$`website_status` <- this_object$`website_status`
      }
      if (!is.null(this_object$`services_name`)) {
        self$`services_name` <- this_object$`services_name`
      }
      if (!is.null(this_object$`website_comment`)) {
        self$`website_comment` <- this_object$`website_comment`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsiteRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsiteRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsiteRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`website_id` <- this_object$`website_id`
      self$`website_hostname` <- this_object$`website_hostname`
      self$`repeat_invoices_cost` <- this_object$`repeat_invoices_cost`
      self$`website_status` <- this_object$`website_status`
      self$`services_name` <- this_object$`services_name`
      self$`website_comment` <- this_object$`website_comment`
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsiteRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `website_id`
      if (!is.null(input_json$`website_id`)) {
        if (!(is.character(input_json$`website_id`) && length(input_json$`website_id`) == 1)) {
          stop(paste("Error! Invalid data for `website_id`. Must be a string:", input_json$`website_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsiteRow: the required field `website_id` is missing."))
      }
      # check the required field `website_hostname`
      if (!is.null(input_json$`website_hostname`)) {
        if (!(is.character(input_json$`website_hostname`) && length(input_json$`website_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `website_hostname`. Must be a string:", input_json$`website_hostname`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsiteRow: the required field `website_hostname` is missing."))
      }
      # check the required field `repeat_invoices_cost`
      if (!is.null(input_json$`repeat_invoices_cost`)) {
        if (!(is.character(input_json$`repeat_invoices_cost`) && length(input_json$`repeat_invoices_cost`) == 1)) {
          stop(paste("Error! Invalid data for `repeat_invoices_cost`. Must be a string:", input_json$`repeat_invoices_cost`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsiteRow: the required field `repeat_invoices_cost` is missing."))
      }
      # check the required field `website_status`
      if (!is.null(input_json$`website_status`)) {
        if (!(is.character(input_json$`website_status`) && length(input_json$`website_status`) == 1)) {
          stop(paste("Error! Invalid data for `website_status`. Must be a string:", input_json$`website_status`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsiteRow: the required field `website_status` is missing."))
      }
      # check the required field `services_name`
      if (!is.null(input_json$`services_name`)) {
        if (!(is.character(input_json$`services_name`) && length(input_json$`services_name`) == 1)) {
          stop(paste("Error! Invalid data for `services_name`. Must be a string:", input_json$`services_name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsiteRow: the required field `services_name` is missing."))
      }
      # check the required field `website_comment`
      if (!is.null(input_json$`website_comment`)) {
        if (!(is.character(input_json$`website_comment`) && length(input_json$`website_comment`) == 1)) {
          stop(paste("Error! Invalid data for `website_comment`. Must be a string:", input_json$`website_comment`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsiteRow: the required field `website_comment` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsiteRow
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `website_id` is null
      if (is.null(self$`website_id`)) {
        return(FALSE)
      }

      # check if the required `website_hostname` is null
      if (is.null(self$`website_hostname`)) {
        return(FALSE)
      }

      # check if the required `repeat_invoices_cost` is null
      if (is.null(self$`repeat_invoices_cost`)) {
        return(FALSE)
      }

      # check if the required `website_status` is null
      if (is.null(self$`website_status`)) {
        return(FALSE)
      }

      # check if the required `services_name` is null
      if (is.null(self$`services_name`)) {
        return(FALSE)
      }

      # check if the required `website_comment` is null
      if (is.null(self$`website_comment`)) {
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
      # check if the required `website_id` is null
      if (is.null(self$`website_id`)) {
        invalid_fields["website_id"] <- "Non-nullable required field `website_id` cannot be null."
      }

      # check if the required `website_hostname` is null
      if (is.null(self$`website_hostname`)) {
        invalid_fields["website_hostname"] <- "Non-nullable required field `website_hostname` cannot be null."
      }

      # check if the required `repeat_invoices_cost` is null
      if (is.null(self$`repeat_invoices_cost`)) {
        invalid_fields["repeat_invoices_cost"] <- "Non-nullable required field `repeat_invoices_cost` cannot be null."
      }

      # check if the required `website_status` is null
      if (is.null(self$`website_status`)) {
        invalid_fields["website_status"] <- "Non-nullable required field `website_status` cannot be null."
      }

      # check if the required `services_name` is null
      if (is.null(self$`services_name`)) {
        invalid_fields["services_name"] <- "Non-nullable required field `services_name` cannot be null."
      }

      # check if the required `website_comment` is null
      if (is.null(self$`website_comment`)) {
        invalid_fields["website_comment"] <- "Non-nullable required field `website_comment` cannot be null."
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
# WebsiteRow$unlock()
#
## Below is an example to define the print function
# WebsiteRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsiteRow$lock()

