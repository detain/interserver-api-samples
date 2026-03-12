#' Create a new MailLogEntry
#'
#' @description
#' An email record
#'
#' @docType class
#' @title MailLogEntry
#' @description MailLogEntry Class
#' @format An \code{R6Class} generator object
#' @field _id internal db id integer
#' @field id mail id character
#' @field from from address character
#' @field to to address character
#' @field subject email subject character
#' @field messageId message id character [optional]
#' @field created creation date character
#' @field time creation timestamp integer
#' @field user user account character
#' @field transtype transaction type character
#' @field origin origin ip character
#' @field interface interface name character
#' @field sendingZone sending zone character
#' @field bodySize email body size in bytes integer
#' @field seq index of email in the to adderess list integer
#' @field recipient to address this email is being sent to character
#' @field domain to address domain character
#' @field locked locked status integer
#' @field lockTime lock timestamp integer
#' @field assigned assigned server character
#' @field queued queued timestamp character
#' @field mxHostname mx hostname character
#' @field response mail delivery response character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailLogEntry <- R6::R6Class(
  "MailLogEntry",
  public = list(
    `_id` = NULL,
    `id` = NULL,
    `from` = NULL,
    `to` = NULL,
    `subject` = NULL,
    `messageId` = NULL,
    `created` = NULL,
    `time` = NULL,
    `user` = NULL,
    `transtype` = NULL,
    `origin` = NULL,
    `interface` = NULL,
    `sendingZone` = NULL,
    `bodySize` = NULL,
    `seq` = NULL,
    `recipient` = NULL,
    `domain` = NULL,
    `locked` = NULL,
    `lockTime` = NULL,
    `assigned` = NULL,
    `queued` = NULL,
    `mxHostname` = NULL,
    `response` = NULL,

    #' @description
    #' Initialize a new MailLogEntry class.
    #'
    #' @param _id internal db id
    #' @param id mail id
    #' @param from from address
    #' @param to to address
    #' @param subject email subject
    #' @param created creation date
    #' @param time creation timestamp
    #' @param user user account
    #' @param transtype transaction type
    #' @param origin origin ip
    #' @param interface interface name
    #' @param sendingZone sending zone
    #' @param bodySize email body size in bytes
    #' @param seq index of email in the to adderess list
    #' @param recipient to address this email is being sent to
    #' @param domain to address domain
    #' @param locked locked status
    #' @param lockTime lock timestamp
    #' @param assigned assigned server
    #' @param queued queued timestamp
    #' @param mxHostname mx hostname
    #' @param response mail delivery response
    #' @param messageId message id
    #' @param ... Other optional arguments.
    initialize = function(`_id`, `id`, `from`, `to`, `subject`, `created`, `time`, `user`, `transtype`, `origin`, `interface`, `sendingZone`, `bodySize`, `seq`, `recipient`, `domain`, `locked`, `lockTime`, `assigned`, `queued`, `mxHostname`, `response`, `messageId` = NULL, ...) {
      if (!missing(`_id`)) {
        if (!(is.numeric(`_id`) && length(`_id`) == 1)) {
          stop(paste("Error! Invalid data for `_id`. Must be an integer:", `_id`))
        }
        self$`_id` <- `_id`
      }
      if (!missing(`id`)) {
        if (!(is.character(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", `id`))
        }
        self$`id` <- `id`
      }
      if (!missing(`from`)) {
        if (!(is.character(`from`) && length(`from`) == 1)) {
          stop(paste("Error! Invalid data for `from`. Must be a string:", `from`))
        }
        self$`from` <- `from`
      }
      if (!missing(`to`)) {
        if (!(is.character(`to`) && length(`to`) == 1)) {
          stop(paste("Error! Invalid data for `to`. Must be a string:", `to`))
        }
        self$`to` <- `to`
      }
      if (!missing(`subject`)) {
        if (!(is.character(`subject`) && length(`subject`) == 1)) {
          stop(paste("Error! Invalid data for `subject`. Must be a string:", `subject`))
        }
        self$`subject` <- `subject`
      }
      if (!missing(`created`)) {
        if (!(is.character(`created`) && length(`created`) == 1)) {
          stop(paste("Error! Invalid data for `created`. Must be a string:", `created`))
        }
        self$`created` <- `created`
      }
      if (!missing(`time`)) {
        if (!(is.numeric(`time`) && length(`time`) == 1)) {
          stop(paste("Error! Invalid data for `time`. Must be an integer:", `time`))
        }
        self$`time` <- `time`
      }
      if (!missing(`user`)) {
        if (!(is.character(`user`) && length(`user`) == 1)) {
          stop(paste("Error! Invalid data for `user`. Must be a string:", `user`))
        }
        self$`user` <- `user`
      }
      if (!missing(`transtype`)) {
        if (!(is.character(`transtype`) && length(`transtype`) == 1)) {
          stop(paste("Error! Invalid data for `transtype`. Must be a string:", `transtype`))
        }
        self$`transtype` <- `transtype`
      }
      if (!missing(`origin`)) {
        if (!(is.character(`origin`) && length(`origin`) == 1)) {
          stop(paste("Error! Invalid data for `origin`. Must be a string:", `origin`))
        }
        self$`origin` <- `origin`
      }
      if (!missing(`interface`)) {
        if (!(is.character(`interface`) && length(`interface`) == 1)) {
          stop(paste("Error! Invalid data for `interface`. Must be a string:", `interface`))
        }
        self$`interface` <- `interface`
      }
      if (!missing(`sendingZone`)) {
        if (!(is.character(`sendingZone`) && length(`sendingZone`) == 1)) {
          stop(paste("Error! Invalid data for `sendingZone`. Must be a string:", `sendingZone`))
        }
        self$`sendingZone` <- `sendingZone`
      }
      if (!missing(`bodySize`)) {
        if (!(is.numeric(`bodySize`) && length(`bodySize`) == 1)) {
          stop(paste("Error! Invalid data for `bodySize`. Must be an integer:", `bodySize`))
        }
        self$`bodySize` <- `bodySize`
      }
      if (!missing(`seq`)) {
        if (!(is.numeric(`seq`) && length(`seq`) == 1)) {
          stop(paste("Error! Invalid data for `seq`. Must be an integer:", `seq`))
        }
        self$`seq` <- `seq`
      }
      if (!missing(`recipient`)) {
        if (!(is.character(`recipient`) && length(`recipient`) == 1)) {
          stop(paste("Error! Invalid data for `recipient`. Must be a string:", `recipient`))
        }
        self$`recipient` <- `recipient`
      }
      if (!missing(`domain`)) {
        if (!(is.character(`domain`) && length(`domain`) == 1)) {
          stop(paste("Error! Invalid data for `domain`. Must be a string:", `domain`))
        }
        self$`domain` <- `domain`
      }
      if (!missing(`locked`)) {
        if (!(is.numeric(`locked`) && length(`locked`) == 1)) {
          stop(paste("Error! Invalid data for `locked`. Must be an integer:", `locked`))
        }
        self$`locked` <- `locked`
      }
      if (!missing(`lockTime`)) {
        if (!(is.numeric(`lockTime`) && length(`lockTime`) == 1)) {
          stop(paste("Error! Invalid data for `lockTime`. Must be an integer:", `lockTime`))
        }
        self$`lockTime` <- `lockTime`
      }
      if (!missing(`assigned`)) {
        if (!(is.character(`assigned`) && length(`assigned`) == 1)) {
          stop(paste("Error! Invalid data for `assigned`. Must be a string:", `assigned`))
        }
        self$`assigned` <- `assigned`
      }
      if (!missing(`queued`)) {
        if (!(is.character(`queued`) && length(`queued`) == 1)) {
          stop(paste("Error! Invalid data for `queued`. Must be a string:", `queued`))
        }
        self$`queued` <- `queued`
      }
      if (!missing(`mxHostname`)) {
        if (!(is.character(`mxHostname`) && length(`mxHostname`) == 1)) {
          stop(paste("Error! Invalid data for `mxHostname`. Must be a string:", `mxHostname`))
        }
        self$`mxHostname` <- `mxHostname`
      }
      if (!missing(`response`)) {
        if (!(is.character(`response`) && length(`response`) == 1)) {
          stop(paste("Error! Invalid data for `response`. Must be a string:", `response`))
        }
        self$`response` <- `response`
      }
      if (!is.null(`messageId`)) {
        if (!(is.character(`messageId`) && length(`messageId`) == 1)) {
          stop(paste("Error! Invalid data for `messageId`. Must be a string:", `messageId`))
        }
        self$`messageId` <- `messageId`
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
    #' @return MailLogEntry as a base R list.
    #' @examples
    #' # convert array of MailLogEntry (x) to a data frame
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
    #' Convert MailLogEntry to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailLogEntryObject <- list()
      if (!is.null(self$`_id`)) {
        MailLogEntryObject[["_id"]] <-
          self$`_id`
      }
      if (!is.null(self$`id`)) {
        MailLogEntryObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`from`)) {
        MailLogEntryObject[["from"]] <-
          self$`from`
      }
      if (!is.null(self$`to`)) {
        MailLogEntryObject[["to"]] <-
          self$`to`
      }
      if (!is.null(self$`subject`)) {
        MailLogEntryObject[["subject"]] <-
          self$`subject`
      }
      if (!is.null(self$`messageId`)) {
        MailLogEntryObject[["messageId"]] <-
          self$`messageId`
      }
      if (!is.null(self$`created`)) {
        MailLogEntryObject[["created"]] <-
          self$`created`
      }
      if (!is.null(self$`time`)) {
        MailLogEntryObject[["time"]] <-
          self$`time`
      }
      if (!is.null(self$`user`)) {
        MailLogEntryObject[["user"]] <-
          self$`user`
      }
      if (!is.null(self$`transtype`)) {
        MailLogEntryObject[["transtype"]] <-
          self$`transtype`
      }
      if (!is.null(self$`origin`)) {
        MailLogEntryObject[["origin"]] <-
          self$`origin`
      }
      if (!is.null(self$`interface`)) {
        MailLogEntryObject[["interface"]] <-
          self$`interface`
      }
      if (!is.null(self$`sendingZone`)) {
        MailLogEntryObject[["sendingZone"]] <-
          self$`sendingZone`
      }
      if (!is.null(self$`bodySize`)) {
        MailLogEntryObject[["bodySize"]] <-
          self$`bodySize`
      }
      if (!is.null(self$`seq`)) {
        MailLogEntryObject[["seq"]] <-
          self$`seq`
      }
      if (!is.null(self$`recipient`)) {
        MailLogEntryObject[["recipient"]] <-
          self$`recipient`
      }
      if (!is.null(self$`domain`)) {
        MailLogEntryObject[["domain"]] <-
          self$`domain`
      }
      if (!is.null(self$`locked`)) {
        MailLogEntryObject[["locked"]] <-
          self$`locked`
      }
      if (!is.null(self$`lockTime`)) {
        MailLogEntryObject[["lockTime"]] <-
          self$`lockTime`
      }
      if (!is.null(self$`assigned`)) {
        MailLogEntryObject[["assigned"]] <-
          self$`assigned`
      }
      if (!is.null(self$`queued`)) {
        MailLogEntryObject[["queued"]] <-
          self$`queued`
      }
      if (!is.null(self$`mxHostname`)) {
        MailLogEntryObject[["mxHostname"]] <-
          self$`mxHostname`
      }
      if (!is.null(self$`response`)) {
        MailLogEntryObject[["response"]] <-
          self$`response`
      }
      return(MailLogEntryObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailLogEntry
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailLogEntry
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`_id`)) {
        self$`_id` <- this_object$`_id`
      }
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`from`)) {
        self$`from` <- this_object$`from`
      }
      if (!is.null(this_object$`to`)) {
        self$`to` <- this_object$`to`
      }
      if (!is.null(this_object$`subject`)) {
        self$`subject` <- this_object$`subject`
      }
      if (!is.null(this_object$`messageId`)) {
        self$`messageId` <- this_object$`messageId`
      }
      if (!is.null(this_object$`created`)) {
        self$`created` <- this_object$`created`
      }
      if (!is.null(this_object$`time`)) {
        self$`time` <- this_object$`time`
      }
      if (!is.null(this_object$`user`)) {
        self$`user` <- this_object$`user`
      }
      if (!is.null(this_object$`transtype`)) {
        self$`transtype` <- this_object$`transtype`
      }
      if (!is.null(this_object$`origin`)) {
        self$`origin` <- this_object$`origin`
      }
      if (!is.null(this_object$`interface`)) {
        self$`interface` <- this_object$`interface`
      }
      if (!is.null(this_object$`sendingZone`)) {
        self$`sendingZone` <- this_object$`sendingZone`
      }
      if (!is.null(this_object$`bodySize`)) {
        self$`bodySize` <- this_object$`bodySize`
      }
      if (!is.null(this_object$`seq`)) {
        self$`seq` <- this_object$`seq`
      }
      if (!is.null(this_object$`recipient`)) {
        self$`recipient` <- this_object$`recipient`
      }
      if (!is.null(this_object$`domain`)) {
        self$`domain` <- this_object$`domain`
      }
      if (!is.null(this_object$`locked`)) {
        self$`locked` <- this_object$`locked`
      }
      if (!is.null(this_object$`lockTime`)) {
        self$`lockTime` <- this_object$`lockTime`
      }
      if (!is.null(this_object$`assigned`)) {
        self$`assigned` <- this_object$`assigned`
      }
      if (!is.null(this_object$`queued`)) {
        self$`queued` <- this_object$`queued`
      }
      if (!is.null(this_object$`mxHostname`)) {
        self$`mxHostname` <- this_object$`mxHostname`
      }
      if (!is.null(this_object$`response`)) {
        self$`response` <- this_object$`response`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailLogEntry in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailLogEntry
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailLogEntry
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`_id` <- this_object$`_id`
      self$`id` <- this_object$`id`
      self$`from` <- this_object$`from`
      self$`to` <- this_object$`to`
      self$`subject` <- this_object$`subject`
      self$`messageId` <- this_object$`messageId`
      self$`created` <- this_object$`created`
      self$`time` <- this_object$`time`
      self$`user` <- this_object$`user`
      self$`transtype` <- this_object$`transtype`
      self$`origin` <- this_object$`origin`
      self$`interface` <- this_object$`interface`
      self$`sendingZone` <- this_object$`sendingZone`
      self$`bodySize` <- this_object$`bodySize`
      self$`seq` <- this_object$`seq`
      self$`recipient` <- this_object$`recipient`
      self$`domain` <- this_object$`domain`
      self$`locked` <- this_object$`locked`
      self$`lockTime` <- this_object$`lockTime`
      self$`assigned` <- this_object$`assigned`
      self$`queued` <- this_object$`queued`
      self$`mxHostname` <- this_object$`mxHostname`
      self$`response` <- this_object$`response`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailLogEntry and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `_id`
      if (!is.null(input_json$`_id`)) {
        if (!(is.numeric(input_json$`_id`) && length(input_json$`_id`) == 1)) {
          stop(paste("Error! Invalid data for `_id`. Must be an integer:", input_json$`_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `_id` is missing."))
      }
      # check the required field `id`
      if (!is.null(input_json$`id`)) {
        if (!(is.character(input_json$`id`) && length(input_json$`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be a string:", input_json$`id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `id` is missing."))
      }
      # check the required field `from`
      if (!is.null(input_json$`from`)) {
        if (!(is.character(input_json$`from`) && length(input_json$`from`) == 1)) {
          stop(paste("Error! Invalid data for `from`. Must be a string:", input_json$`from`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `from` is missing."))
      }
      # check the required field `to`
      if (!is.null(input_json$`to`)) {
        if (!(is.character(input_json$`to`) && length(input_json$`to`) == 1)) {
          stop(paste("Error! Invalid data for `to`. Must be a string:", input_json$`to`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `to` is missing."))
      }
      # check the required field `subject`
      if (!is.null(input_json$`subject`)) {
        if (!(is.character(input_json$`subject`) && length(input_json$`subject`) == 1)) {
          stop(paste("Error! Invalid data for `subject`. Must be a string:", input_json$`subject`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `subject` is missing."))
      }
      # check the required field `created`
      if (!is.null(input_json$`created`)) {
        if (!(is.character(input_json$`created`) && length(input_json$`created`) == 1)) {
          stop(paste("Error! Invalid data for `created`. Must be a string:", input_json$`created`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `created` is missing."))
      }
      # check the required field `time`
      if (!is.null(input_json$`time`)) {
        if (!(is.numeric(input_json$`time`) && length(input_json$`time`) == 1)) {
          stop(paste("Error! Invalid data for `time`. Must be an integer:", input_json$`time`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `time` is missing."))
      }
      # check the required field `user`
      if (!is.null(input_json$`user`)) {
        if (!(is.character(input_json$`user`) && length(input_json$`user`) == 1)) {
          stop(paste("Error! Invalid data for `user`. Must be a string:", input_json$`user`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `user` is missing."))
      }
      # check the required field `transtype`
      if (!is.null(input_json$`transtype`)) {
        if (!(is.character(input_json$`transtype`) && length(input_json$`transtype`) == 1)) {
          stop(paste("Error! Invalid data for `transtype`. Must be a string:", input_json$`transtype`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `transtype` is missing."))
      }
      # check the required field `origin`
      if (!is.null(input_json$`origin`)) {
        if (!(is.character(input_json$`origin`) && length(input_json$`origin`) == 1)) {
          stop(paste("Error! Invalid data for `origin`. Must be a string:", input_json$`origin`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `origin` is missing."))
      }
      # check the required field `interface`
      if (!is.null(input_json$`interface`)) {
        if (!(is.character(input_json$`interface`) && length(input_json$`interface`) == 1)) {
          stop(paste("Error! Invalid data for `interface`. Must be a string:", input_json$`interface`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `interface` is missing."))
      }
      # check the required field `sendingZone`
      if (!is.null(input_json$`sendingZone`)) {
        if (!(is.character(input_json$`sendingZone`) && length(input_json$`sendingZone`) == 1)) {
          stop(paste("Error! Invalid data for `sendingZone`. Must be a string:", input_json$`sendingZone`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `sendingZone` is missing."))
      }
      # check the required field `bodySize`
      if (!is.null(input_json$`bodySize`)) {
        if (!(is.numeric(input_json$`bodySize`) && length(input_json$`bodySize`) == 1)) {
          stop(paste("Error! Invalid data for `bodySize`. Must be an integer:", input_json$`bodySize`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `bodySize` is missing."))
      }
      # check the required field `seq`
      if (!is.null(input_json$`seq`)) {
        if (!(is.numeric(input_json$`seq`) && length(input_json$`seq`) == 1)) {
          stop(paste("Error! Invalid data for `seq`. Must be an integer:", input_json$`seq`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `seq` is missing."))
      }
      # check the required field `recipient`
      if (!is.null(input_json$`recipient`)) {
        if (!(is.character(input_json$`recipient`) && length(input_json$`recipient`) == 1)) {
          stop(paste("Error! Invalid data for `recipient`. Must be a string:", input_json$`recipient`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `recipient` is missing."))
      }
      # check the required field `domain`
      if (!is.null(input_json$`domain`)) {
        if (!(is.character(input_json$`domain`) && length(input_json$`domain`) == 1)) {
          stop(paste("Error! Invalid data for `domain`. Must be a string:", input_json$`domain`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `domain` is missing."))
      }
      # check the required field `locked`
      if (!is.null(input_json$`locked`)) {
        if (!(is.numeric(input_json$`locked`) && length(input_json$`locked`) == 1)) {
          stop(paste("Error! Invalid data for `locked`. Must be an integer:", input_json$`locked`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `locked` is missing."))
      }
      # check the required field `lockTime`
      if (!is.null(input_json$`lockTime`)) {
        if (!(is.numeric(input_json$`lockTime`) && length(input_json$`lockTime`) == 1)) {
          stop(paste("Error! Invalid data for `lockTime`. Must be an integer:", input_json$`lockTime`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `lockTime` is missing."))
      }
      # check the required field `assigned`
      if (!is.null(input_json$`assigned`)) {
        if (!(is.character(input_json$`assigned`) && length(input_json$`assigned`) == 1)) {
          stop(paste("Error! Invalid data for `assigned`. Must be a string:", input_json$`assigned`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `assigned` is missing."))
      }
      # check the required field `queued`
      if (!is.null(input_json$`queued`)) {
        if (!(is.character(input_json$`queued`) && length(input_json$`queued`) == 1)) {
          stop(paste("Error! Invalid data for `queued`. Must be a string:", input_json$`queued`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `queued` is missing."))
      }
      # check the required field `mxHostname`
      if (!is.null(input_json$`mxHostname`)) {
        if (!(is.character(input_json$`mxHostname`) && length(input_json$`mxHostname`) == 1)) {
          stop(paste("Error! Invalid data for `mxHostname`. Must be a string:", input_json$`mxHostname`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `mxHostname` is missing."))
      }
      # check the required field `response`
      if (!is.null(input_json$`response`)) {
        if (!(is.character(input_json$`response`) && length(input_json$`response`) == 1)) {
          stop(paste("Error! Invalid data for `response`. Must be a string:", input_json$`response`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for MailLogEntry: the required field `response` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailLogEntry
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `_id` is null
      if (is.null(self$`_id`)) {
        return(FALSE)
      }

      # check if the required `id` is null
      if (is.null(self$`id`)) {
        return(FALSE)
      }

      # check if the required `from` is null
      if (is.null(self$`from`)) {
        return(FALSE)
      }

      # check if the required `to` is null
      if (is.null(self$`to`)) {
        return(FALSE)
      }

      # check if the required `subject` is null
      if (is.null(self$`subject`)) {
        return(FALSE)
      }

      # check if the required `created` is null
      if (is.null(self$`created`)) {
        return(FALSE)
      }

      # check if the required `time` is null
      if (is.null(self$`time`)) {
        return(FALSE)
      }

      # check if the required `user` is null
      if (is.null(self$`user`)) {
        return(FALSE)
      }

      # check if the required `transtype` is null
      if (is.null(self$`transtype`)) {
        return(FALSE)
      }

      # check if the required `origin` is null
      if (is.null(self$`origin`)) {
        return(FALSE)
      }

      # check if the required `interface` is null
      if (is.null(self$`interface`)) {
        return(FALSE)
      }

      # check if the required `sendingZone` is null
      if (is.null(self$`sendingZone`)) {
        return(FALSE)
      }

      # check if the required `bodySize` is null
      if (is.null(self$`bodySize`)) {
        return(FALSE)
      }

      # check if the required `seq` is null
      if (is.null(self$`seq`)) {
        return(FALSE)
      }

      # check if the required `recipient` is null
      if (is.null(self$`recipient`)) {
        return(FALSE)
      }

      # check if the required `domain` is null
      if (is.null(self$`domain`)) {
        return(FALSE)
      }

      # check if the required `locked` is null
      if (is.null(self$`locked`)) {
        return(FALSE)
      }

      # check if the required `lockTime` is null
      if (is.null(self$`lockTime`)) {
        return(FALSE)
      }

      # check if the required `assigned` is null
      if (is.null(self$`assigned`)) {
        return(FALSE)
      }

      # check if the required `queued` is null
      if (is.null(self$`queued`)) {
        return(FALSE)
      }

      # check if the required `mxHostname` is null
      if (is.null(self$`mxHostname`)) {
        return(FALSE)
      }

      # check if the required `response` is null
      if (is.null(self$`response`)) {
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
      # check if the required `_id` is null
      if (is.null(self$`_id`)) {
        invalid_fields["_id"] <- "Non-nullable required field `_id` cannot be null."
      }

      # check if the required `id` is null
      if (is.null(self$`id`)) {
        invalid_fields["id"] <- "Non-nullable required field `id` cannot be null."
      }

      # check if the required `from` is null
      if (is.null(self$`from`)) {
        invalid_fields["from"] <- "Non-nullable required field `from` cannot be null."
      }

      # check if the required `to` is null
      if (is.null(self$`to`)) {
        invalid_fields["to"] <- "Non-nullable required field `to` cannot be null."
      }

      # check if the required `subject` is null
      if (is.null(self$`subject`)) {
        invalid_fields["subject"] <- "Non-nullable required field `subject` cannot be null."
      }

      # check if the required `created` is null
      if (is.null(self$`created`)) {
        invalid_fields["created"] <- "Non-nullable required field `created` cannot be null."
      }

      # check if the required `time` is null
      if (is.null(self$`time`)) {
        invalid_fields["time"] <- "Non-nullable required field `time` cannot be null."
      }

      # check if the required `user` is null
      if (is.null(self$`user`)) {
        invalid_fields["user"] <- "Non-nullable required field `user` cannot be null."
      }

      # check if the required `transtype` is null
      if (is.null(self$`transtype`)) {
        invalid_fields["transtype"] <- "Non-nullable required field `transtype` cannot be null."
      }

      # check if the required `origin` is null
      if (is.null(self$`origin`)) {
        invalid_fields["origin"] <- "Non-nullable required field `origin` cannot be null."
      }

      # check if the required `interface` is null
      if (is.null(self$`interface`)) {
        invalid_fields["interface"] <- "Non-nullable required field `interface` cannot be null."
      }

      # check if the required `sendingZone` is null
      if (is.null(self$`sendingZone`)) {
        invalid_fields["sendingZone"] <- "Non-nullable required field `sendingZone` cannot be null."
      }

      # check if the required `bodySize` is null
      if (is.null(self$`bodySize`)) {
        invalid_fields["bodySize"] <- "Non-nullable required field `bodySize` cannot be null."
      }

      # check if the required `seq` is null
      if (is.null(self$`seq`)) {
        invalid_fields["seq"] <- "Non-nullable required field `seq` cannot be null."
      }

      # check if the required `recipient` is null
      if (is.null(self$`recipient`)) {
        invalid_fields["recipient"] <- "Non-nullable required field `recipient` cannot be null."
      }

      # check if the required `domain` is null
      if (is.null(self$`domain`)) {
        invalid_fields["domain"] <- "Non-nullable required field `domain` cannot be null."
      }

      # check if the required `locked` is null
      if (is.null(self$`locked`)) {
        invalid_fields["locked"] <- "Non-nullable required field `locked` cannot be null."
      }

      # check if the required `lockTime` is null
      if (is.null(self$`lockTime`)) {
        invalid_fields["lockTime"] <- "Non-nullable required field `lockTime` cannot be null."
      }

      # check if the required `assigned` is null
      if (is.null(self$`assigned`)) {
        invalid_fields["assigned"] <- "Non-nullable required field `assigned` cannot be null."
      }

      # check if the required `queued` is null
      if (is.null(self$`queued`)) {
        invalid_fields["queued"] <- "Non-nullable required field `queued` cannot be null."
      }

      # check if the required `mxHostname` is null
      if (is.null(self$`mxHostname`)) {
        invalid_fields["mxHostname"] <- "Non-nullable required field `mxHostname` cannot be null."
      }

      # check if the required `response` is null
      if (is.null(self$`response`)) {
        invalid_fields["response"] <- "Non-nullable required field `response` cannot be null."
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
# MailLogEntry$unlock()
#
## Below is an example to define the print function
# MailLogEntry$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailLogEntry$lock()

