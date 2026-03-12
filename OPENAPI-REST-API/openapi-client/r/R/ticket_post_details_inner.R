#' Create a new TicketPostDetailsInner
#'
#' @description
#' TicketPostDetailsInner Class
#'
#' @docType class
#' @title TicketPostDetailsInner
#' @description TicketPostDetailsInner Class
#' @format An \code{R6Class} generator object
#' @field post_id  integer [optional]
#' @field date  character [optional]
#' @field contents  character [optional]
#' @field creator  character [optional]
#' @field creator_email  character [optional]
#' @field creator_name  character [optional]
#' @field hasattachments  integer [optional]
#' @field attachment_download  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
TicketPostDetailsInner <- R6::R6Class(
  "TicketPostDetailsInner",
  public = list(
    `post_id` = NULL,
    `date` = NULL,
    `contents` = NULL,
    `creator` = NULL,
    `creator_email` = NULL,
    `creator_name` = NULL,
    `hasattachments` = NULL,
    `attachment_download` = NULL,

    #' @description
    #' Initialize a new TicketPostDetailsInner class.
    #'
    #' @param post_id post_id
    #' @param date date
    #' @param contents contents
    #' @param creator creator
    #' @param creator_email creator_email
    #' @param creator_name creator_name
    #' @param hasattachments hasattachments
    #' @param attachment_download attachment_download
    #' @param ... Other optional arguments.
    initialize = function(`post_id` = NULL, `date` = NULL, `contents` = NULL, `creator` = NULL, `creator_email` = NULL, `creator_name` = NULL, `hasattachments` = NULL, `attachment_download` = NULL, ...) {
      if (!is.null(`post_id`)) {
        if (!(is.numeric(`post_id`) && length(`post_id`) == 1)) {
          stop(paste("Error! Invalid data for `post_id`. Must be an integer:", `post_id`))
        }
        self$`post_id` <- `post_id`
      }
      if (!is.null(`date`)) {
        if (!(is.character(`date`) && length(`date`) == 1)) {
          stop(paste("Error! Invalid data for `date`. Must be a string:", `date`))
        }
        self$`date` <- `date`
      }
      if (!is.null(`contents`)) {
        if (!(is.character(`contents`) && length(`contents`) == 1)) {
          stop(paste("Error! Invalid data for `contents`. Must be a string:", `contents`))
        }
        self$`contents` <- `contents`
      }
      if (!is.null(`creator`)) {
        if (!(`creator` %in% c("User", "Staff"))) {
          stop(paste("Error! \"", `creator`, "\" cannot be assigned to `creator`. Must be \"User\", \"Staff\".", sep = ""))
        }
        if (!(is.character(`creator`) && length(`creator`) == 1)) {
          stop(paste("Error! Invalid data for `creator`. Must be a string:", `creator`))
        }
        self$`creator` <- `creator`
      }
      if (!is.null(`creator_email`)) {
        if (!(is.character(`creator_email`) && length(`creator_email`) == 1)) {
          stop(paste("Error! Invalid data for `creator_email`. Must be a string:", `creator_email`))
        }
        self$`creator_email` <- `creator_email`
      }
      if (!is.null(`creator_name`)) {
        if (!(is.character(`creator_name`) && length(`creator_name`) == 1)) {
          stop(paste("Error! Invalid data for `creator_name`. Must be a string:", `creator_name`))
        }
        self$`creator_name` <- `creator_name`
      }
      if (!is.null(`hasattachments`)) {
        if (!(is.numeric(`hasattachments`) && length(`hasattachments`) == 1)) {
          stop(paste("Error! Invalid data for `hasattachments`. Must be an integer:", `hasattachments`))
        }
        self$`hasattachments` <- `hasattachments`
      }
      if (!is.null(`attachment_download`)) {
        if (!(is.character(`attachment_download`) && length(`attachment_download`) == 1)) {
          stop(paste("Error! Invalid data for `attachment_download`. Must be a string:", `attachment_download`))
        }
        self$`attachment_download` <- `attachment_download`
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
    #' @return TicketPostDetailsInner as a base R list.
    #' @examples
    #' # convert array of TicketPostDetailsInner (x) to a data frame
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
    #' Convert TicketPostDetailsInner to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      TicketPostDetailsInnerObject <- list()
      if (!is.null(self$`post_id`)) {
        TicketPostDetailsInnerObject[["post_id"]] <-
          self$`post_id`
      }
      if (!is.null(self$`date`)) {
        TicketPostDetailsInnerObject[["date"]] <-
          self$`date`
      }
      if (!is.null(self$`contents`)) {
        TicketPostDetailsInnerObject[["contents"]] <-
          self$`contents`
      }
      if (!is.null(self$`creator`)) {
        TicketPostDetailsInnerObject[["creator"]] <-
          self$`creator`
      }
      if (!is.null(self$`creator_email`)) {
        TicketPostDetailsInnerObject[["creator_email"]] <-
          self$`creator_email`
      }
      if (!is.null(self$`creator_name`)) {
        TicketPostDetailsInnerObject[["creator_name"]] <-
          self$`creator_name`
      }
      if (!is.null(self$`hasattachments`)) {
        TicketPostDetailsInnerObject[["hasattachments"]] <-
          self$`hasattachments`
      }
      if (!is.null(self$`attachment_download`)) {
        TicketPostDetailsInnerObject[["attachment_download"]] <-
          self$`attachment_download`
      }
      return(TicketPostDetailsInnerObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of TicketPostDetailsInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of TicketPostDetailsInner
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`post_id`)) {
        self$`post_id` <- this_object$`post_id`
      }
      if (!is.null(this_object$`date`)) {
        self$`date` <- this_object$`date`
      }
      if (!is.null(this_object$`contents`)) {
        self$`contents` <- this_object$`contents`
      }
      if (!is.null(this_object$`creator`)) {
        if (!is.null(this_object$`creator`) && !(this_object$`creator` %in% c("User", "Staff"))) {
          stop(paste("Error! \"", this_object$`creator`, "\" cannot be assigned to `creator`. Must be \"User\", \"Staff\".", sep = ""))
        }
        self$`creator` <- this_object$`creator`
      }
      if (!is.null(this_object$`creator_email`)) {
        self$`creator_email` <- this_object$`creator_email`
      }
      if (!is.null(this_object$`creator_name`)) {
        self$`creator_name` <- this_object$`creator_name`
      }
      if (!is.null(this_object$`hasattachments`)) {
        self$`hasattachments` <- this_object$`hasattachments`
      }
      if (!is.null(this_object$`attachment_download`)) {
        self$`attachment_download` <- this_object$`attachment_download`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return TicketPostDetailsInner in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of TicketPostDetailsInner
    #'
    #' @param input_json the JSON input
    #' @return the instance of TicketPostDetailsInner
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`post_id` <- this_object$`post_id`
      self$`date` <- this_object$`date`
      self$`contents` <- this_object$`contents`
      if (!is.null(this_object$`creator`) && !(this_object$`creator` %in% c("User", "Staff"))) {
        stop(paste("Error! \"", this_object$`creator`, "\" cannot be assigned to `creator`. Must be \"User\", \"Staff\".", sep = ""))
      }
      self$`creator` <- this_object$`creator`
      self$`creator_email` <- this_object$`creator_email`
      self$`creator_name` <- this_object$`creator_name`
      self$`hasattachments` <- this_object$`hasattachments`
      self$`attachment_download` <- this_object$`attachment_download`
      self
    },

    #' @description
    #' Validate JSON input with respect to TicketPostDetailsInner and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of TicketPostDetailsInner
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
# TicketPostDetailsInner$unlock()
#
## Below is an example to define the print function
# TicketPostDetailsInner$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# TicketPostDetailsInner$lock()

