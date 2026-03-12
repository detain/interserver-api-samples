#' Create a new QuickserverServiceMaster
#'
#' @description
#' Information about the host node running this QuickServer, including hardware specs and resource utilization.
#'
#' @docType class
#' @title QuickserverServiceMaster
#' @description QuickserverServiceMaster Class
#' @format An \code{R6Class} generator object
#' @field qs_id Quickserver ID character [optional]
#' @field qs_name Quickserver name character [optional]
#' @field qs_ip IP address character [optional]
#' @field qs_type Type character [optional]
#' @field qs_hdsize HDD size character [optional]
#' @field qs_hdfree Free HDD space character [optional]
#' @field qs_bits Bits character [optional]
#' @field qs_load Load character [optional]
#' @field qs_ram RAM information character [optional]
#' @field qs_cpu_model CPU model character [optional]
#' @field qs_cpu_mhz CPU frequency character [optional]
#' @field qs_location Location character [optional]
#' @field qs_available Available information character [optional]
#' @field qs_cost Cost character [optional]
#' @field qs_last_update Last update date character [optional]
#' @field qs_cores Number of cores character [optional]
#' @field qs_iowait I/O wait character [optional]
#' @field qs_raid_status RAID status character [optional]
#' @field qs_drive_type Drive type character [optional]
#' @field qs_order Order number character [optional]
#' @field qs_raid_building RAID building information character [optional]
#' @field qs_kernel Kernel version character [optional]
#' @field qs_ioping IOPing information character [optional]
#' @field qs_speed Speed information character [optional]
#' @field qs_distro Distribution name character [optional]
#' @field qs_distro_version Distribution version character [optional]
#' @field qs_bytes_sec_in Bytes/sec in character [optional]
#' @field qs_bytes_sec_out Bytes/sec out character [optional]
#' @field qs_packets_sec_in Packets/sec in character [optional]
#' @field qs_packets_sec_out Packets/sec out character [optional]
#' @field qs_last_install_time Last install time (null) \link{AnyType} [optional]
#' @field qs_partitions Partitions information (null) \link{AnyType} [optional]
#' @field qs_cpu_flags CPU flags character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverServiceMaster <- R6::R6Class(
  "QuickserverServiceMaster",
  public = list(
    `qs_id` = NULL,
    `qs_name` = NULL,
    `qs_ip` = NULL,
    `qs_type` = NULL,
    `qs_hdsize` = NULL,
    `qs_hdfree` = NULL,
    `qs_bits` = NULL,
    `qs_load` = NULL,
    `qs_ram` = NULL,
    `qs_cpu_model` = NULL,
    `qs_cpu_mhz` = NULL,
    `qs_location` = NULL,
    `qs_available` = NULL,
    `qs_cost` = NULL,
    `qs_last_update` = NULL,
    `qs_cores` = NULL,
    `qs_iowait` = NULL,
    `qs_raid_status` = NULL,
    `qs_drive_type` = NULL,
    `qs_order` = NULL,
    `qs_raid_building` = NULL,
    `qs_kernel` = NULL,
    `qs_ioping` = NULL,
    `qs_speed` = NULL,
    `qs_distro` = NULL,
    `qs_distro_version` = NULL,
    `qs_bytes_sec_in` = NULL,
    `qs_bytes_sec_out` = NULL,
    `qs_packets_sec_in` = NULL,
    `qs_packets_sec_out` = NULL,
    `qs_last_install_time` = NULL,
    `qs_partitions` = NULL,
    `qs_cpu_flags` = NULL,

    #' @description
    #' Initialize a new QuickserverServiceMaster class.
    #'
    #' @param qs_id Quickserver ID
    #' @param qs_name Quickserver name
    #' @param qs_ip IP address
    #' @param qs_type Type
    #' @param qs_hdsize HDD size
    #' @param qs_hdfree Free HDD space
    #' @param qs_bits Bits
    #' @param qs_load Load
    #' @param qs_ram RAM information
    #' @param qs_cpu_model CPU model
    #' @param qs_cpu_mhz CPU frequency
    #' @param qs_location Location
    #' @param qs_available Available information
    #' @param qs_cost Cost
    #' @param qs_last_update Last update date
    #' @param qs_cores Number of cores
    #' @param qs_iowait I/O wait
    #' @param qs_raid_status RAID status
    #' @param qs_drive_type Drive type
    #' @param qs_order Order number
    #' @param qs_raid_building RAID building information
    #' @param qs_kernel Kernel version
    #' @param qs_ioping IOPing information
    #' @param qs_speed Speed information
    #' @param qs_distro Distribution name
    #' @param qs_distro_version Distribution version
    #' @param qs_bytes_sec_in Bytes/sec in
    #' @param qs_bytes_sec_out Bytes/sec out
    #' @param qs_packets_sec_in Packets/sec in
    #' @param qs_packets_sec_out Packets/sec out
    #' @param qs_last_install_time Last install time (null)
    #' @param qs_partitions Partitions information (null)
    #' @param qs_cpu_flags CPU flags
    #' @param ... Other optional arguments.
    initialize = function(`qs_id` = NULL, `qs_name` = NULL, `qs_ip` = NULL, `qs_type` = NULL, `qs_hdsize` = NULL, `qs_hdfree` = NULL, `qs_bits` = NULL, `qs_load` = NULL, `qs_ram` = NULL, `qs_cpu_model` = NULL, `qs_cpu_mhz` = NULL, `qs_location` = NULL, `qs_available` = NULL, `qs_cost` = NULL, `qs_last_update` = NULL, `qs_cores` = NULL, `qs_iowait` = NULL, `qs_raid_status` = NULL, `qs_drive_type` = NULL, `qs_order` = NULL, `qs_raid_building` = NULL, `qs_kernel` = NULL, `qs_ioping` = NULL, `qs_speed` = NULL, `qs_distro` = NULL, `qs_distro_version` = NULL, `qs_bytes_sec_in` = NULL, `qs_bytes_sec_out` = NULL, `qs_packets_sec_in` = NULL, `qs_packets_sec_out` = NULL, `qs_last_install_time` = NULL, `qs_partitions` = NULL, `qs_cpu_flags` = NULL, ...) {
      if (!is.null(`qs_id`)) {
        if (!(is.character(`qs_id`) && length(`qs_id`) == 1)) {
          stop(paste("Error! Invalid data for `qs_id`. Must be a string:", `qs_id`))
        }
        self$`qs_id` <- `qs_id`
      }
      if (!is.null(`qs_name`)) {
        if (!(is.character(`qs_name`) && length(`qs_name`) == 1)) {
          stop(paste("Error! Invalid data for `qs_name`. Must be a string:", `qs_name`))
        }
        self$`qs_name` <- `qs_name`
      }
      if (!is.null(`qs_ip`)) {
        if (!(is.character(`qs_ip`) && length(`qs_ip`) == 1)) {
          stop(paste("Error! Invalid data for `qs_ip`. Must be a string:", `qs_ip`))
        }
        self$`qs_ip` <- `qs_ip`
      }
      if (!is.null(`qs_type`)) {
        if (!(is.character(`qs_type`) && length(`qs_type`) == 1)) {
          stop(paste("Error! Invalid data for `qs_type`. Must be a string:", `qs_type`))
        }
        self$`qs_type` <- `qs_type`
      }
      if (!is.null(`qs_hdsize`)) {
        if (!(is.character(`qs_hdsize`) && length(`qs_hdsize`) == 1)) {
          stop(paste("Error! Invalid data for `qs_hdsize`. Must be a string:", `qs_hdsize`))
        }
        self$`qs_hdsize` <- `qs_hdsize`
      }
      if (!is.null(`qs_hdfree`)) {
        if (!(is.character(`qs_hdfree`) && length(`qs_hdfree`) == 1)) {
          stop(paste("Error! Invalid data for `qs_hdfree`. Must be a string:", `qs_hdfree`))
        }
        self$`qs_hdfree` <- `qs_hdfree`
      }
      if (!is.null(`qs_bits`)) {
        if (!(is.character(`qs_bits`) && length(`qs_bits`) == 1)) {
          stop(paste("Error! Invalid data for `qs_bits`. Must be a string:", `qs_bits`))
        }
        self$`qs_bits` <- `qs_bits`
      }
      if (!is.null(`qs_load`)) {
        if (!(is.character(`qs_load`) && length(`qs_load`) == 1)) {
          stop(paste("Error! Invalid data for `qs_load`. Must be a string:", `qs_load`))
        }
        self$`qs_load` <- `qs_load`
      }
      if (!is.null(`qs_ram`)) {
        if (!(is.character(`qs_ram`) && length(`qs_ram`) == 1)) {
          stop(paste("Error! Invalid data for `qs_ram`. Must be a string:", `qs_ram`))
        }
        self$`qs_ram` <- `qs_ram`
      }
      if (!is.null(`qs_cpu_model`)) {
        if (!(is.character(`qs_cpu_model`) && length(`qs_cpu_model`) == 1)) {
          stop(paste("Error! Invalid data for `qs_cpu_model`. Must be a string:", `qs_cpu_model`))
        }
        self$`qs_cpu_model` <- `qs_cpu_model`
      }
      if (!is.null(`qs_cpu_mhz`)) {
        if (!(is.character(`qs_cpu_mhz`) && length(`qs_cpu_mhz`) == 1)) {
          stop(paste("Error! Invalid data for `qs_cpu_mhz`. Must be a string:", `qs_cpu_mhz`))
        }
        self$`qs_cpu_mhz` <- `qs_cpu_mhz`
      }
      if (!is.null(`qs_location`)) {
        if (!(is.character(`qs_location`) && length(`qs_location`) == 1)) {
          stop(paste("Error! Invalid data for `qs_location`. Must be a string:", `qs_location`))
        }
        self$`qs_location` <- `qs_location`
      }
      if (!is.null(`qs_available`)) {
        if (!(is.character(`qs_available`) && length(`qs_available`) == 1)) {
          stop(paste("Error! Invalid data for `qs_available`. Must be a string:", `qs_available`))
        }
        self$`qs_available` <- `qs_available`
      }
      if (!is.null(`qs_cost`)) {
        if (!(is.character(`qs_cost`) && length(`qs_cost`) == 1)) {
          stop(paste("Error! Invalid data for `qs_cost`. Must be a string:", `qs_cost`))
        }
        self$`qs_cost` <- `qs_cost`
      }
      if (!is.null(`qs_last_update`)) {
        if (!(is.character(`qs_last_update`) && length(`qs_last_update`) == 1)) {
          stop(paste("Error! Invalid data for `qs_last_update`. Must be a string:", `qs_last_update`))
        }
        self$`qs_last_update` <- `qs_last_update`
      }
      if (!is.null(`qs_cores`)) {
        if (!(is.character(`qs_cores`) && length(`qs_cores`) == 1)) {
          stop(paste("Error! Invalid data for `qs_cores`. Must be a string:", `qs_cores`))
        }
        self$`qs_cores` <- `qs_cores`
      }
      if (!is.null(`qs_iowait`)) {
        if (!(is.character(`qs_iowait`) && length(`qs_iowait`) == 1)) {
          stop(paste("Error! Invalid data for `qs_iowait`. Must be a string:", `qs_iowait`))
        }
        self$`qs_iowait` <- `qs_iowait`
      }
      if (!is.null(`qs_raid_status`)) {
        if (!(is.character(`qs_raid_status`) && length(`qs_raid_status`) == 1)) {
          stop(paste("Error! Invalid data for `qs_raid_status`. Must be a string:", `qs_raid_status`))
        }
        self$`qs_raid_status` <- `qs_raid_status`
      }
      if (!is.null(`qs_drive_type`)) {
        if (!(is.character(`qs_drive_type`) && length(`qs_drive_type`) == 1)) {
          stop(paste("Error! Invalid data for `qs_drive_type`. Must be a string:", `qs_drive_type`))
        }
        self$`qs_drive_type` <- `qs_drive_type`
      }
      if (!is.null(`qs_order`)) {
        if (!(is.character(`qs_order`) && length(`qs_order`) == 1)) {
          stop(paste("Error! Invalid data for `qs_order`. Must be a string:", `qs_order`))
        }
        self$`qs_order` <- `qs_order`
      }
      if (!is.null(`qs_raid_building`)) {
        if (!(is.character(`qs_raid_building`) && length(`qs_raid_building`) == 1)) {
          stop(paste("Error! Invalid data for `qs_raid_building`. Must be a string:", `qs_raid_building`))
        }
        self$`qs_raid_building` <- `qs_raid_building`
      }
      if (!is.null(`qs_kernel`)) {
        if (!(is.character(`qs_kernel`) && length(`qs_kernel`) == 1)) {
          stop(paste("Error! Invalid data for `qs_kernel`. Must be a string:", `qs_kernel`))
        }
        self$`qs_kernel` <- `qs_kernel`
      }
      if (!is.null(`qs_ioping`)) {
        if (!(is.character(`qs_ioping`) && length(`qs_ioping`) == 1)) {
          stop(paste("Error! Invalid data for `qs_ioping`. Must be a string:", `qs_ioping`))
        }
        self$`qs_ioping` <- `qs_ioping`
      }
      if (!is.null(`qs_speed`)) {
        if (!(is.character(`qs_speed`) && length(`qs_speed`) == 1)) {
          stop(paste("Error! Invalid data for `qs_speed`. Must be a string:", `qs_speed`))
        }
        self$`qs_speed` <- `qs_speed`
      }
      if (!is.null(`qs_distro`)) {
        if (!(is.character(`qs_distro`) && length(`qs_distro`) == 1)) {
          stop(paste("Error! Invalid data for `qs_distro`. Must be a string:", `qs_distro`))
        }
        self$`qs_distro` <- `qs_distro`
      }
      if (!is.null(`qs_distro_version`)) {
        if (!(is.character(`qs_distro_version`) && length(`qs_distro_version`) == 1)) {
          stop(paste("Error! Invalid data for `qs_distro_version`. Must be a string:", `qs_distro_version`))
        }
        self$`qs_distro_version` <- `qs_distro_version`
      }
      if (!is.null(`qs_bytes_sec_in`)) {
        if (!(is.character(`qs_bytes_sec_in`) && length(`qs_bytes_sec_in`) == 1)) {
          stop(paste("Error! Invalid data for `qs_bytes_sec_in`. Must be a string:", `qs_bytes_sec_in`))
        }
        self$`qs_bytes_sec_in` <- `qs_bytes_sec_in`
      }
      if (!is.null(`qs_bytes_sec_out`)) {
        if (!(is.character(`qs_bytes_sec_out`) && length(`qs_bytes_sec_out`) == 1)) {
          stop(paste("Error! Invalid data for `qs_bytes_sec_out`. Must be a string:", `qs_bytes_sec_out`))
        }
        self$`qs_bytes_sec_out` <- `qs_bytes_sec_out`
      }
      if (!is.null(`qs_packets_sec_in`)) {
        if (!(is.character(`qs_packets_sec_in`) && length(`qs_packets_sec_in`) == 1)) {
          stop(paste("Error! Invalid data for `qs_packets_sec_in`. Must be a string:", `qs_packets_sec_in`))
        }
        self$`qs_packets_sec_in` <- `qs_packets_sec_in`
      }
      if (!is.null(`qs_packets_sec_out`)) {
        if (!(is.character(`qs_packets_sec_out`) && length(`qs_packets_sec_out`) == 1)) {
          stop(paste("Error! Invalid data for `qs_packets_sec_out`. Must be a string:", `qs_packets_sec_out`))
        }
        self$`qs_packets_sec_out` <- `qs_packets_sec_out`
      }
      if (!is.null(`qs_last_install_time`)) {
        stopifnot(R6::is.R6(`qs_last_install_time`))
        self$`qs_last_install_time` <- `qs_last_install_time`
      }
      if (!is.null(`qs_partitions`)) {
        stopifnot(R6::is.R6(`qs_partitions`))
        self$`qs_partitions` <- `qs_partitions`
      }
      if (!is.null(`qs_cpu_flags`)) {
        if (!(is.character(`qs_cpu_flags`) && length(`qs_cpu_flags`) == 1)) {
          stop(paste("Error! Invalid data for `qs_cpu_flags`. Must be a string:", `qs_cpu_flags`))
        }
        self$`qs_cpu_flags` <- `qs_cpu_flags`
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
    #' @return QuickserverServiceMaster as a base R list.
    #' @examples
    #' # convert array of QuickserverServiceMaster (x) to a data frame
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
    #' Convert QuickserverServiceMaster to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverServiceMasterObject <- list()
      if (!is.null(self$`qs_id`)) {
        QuickserverServiceMasterObject[["qs_id"]] <-
          self$`qs_id`
      }
      if (!is.null(self$`qs_name`)) {
        QuickserverServiceMasterObject[["qs_name"]] <-
          self$`qs_name`
      }
      if (!is.null(self$`qs_ip`)) {
        QuickserverServiceMasterObject[["qs_ip"]] <-
          self$`qs_ip`
      }
      if (!is.null(self$`qs_type`)) {
        QuickserverServiceMasterObject[["qs_type"]] <-
          self$`qs_type`
      }
      if (!is.null(self$`qs_hdsize`)) {
        QuickserverServiceMasterObject[["qs_hdsize"]] <-
          self$`qs_hdsize`
      }
      if (!is.null(self$`qs_hdfree`)) {
        QuickserverServiceMasterObject[["qs_hdfree"]] <-
          self$`qs_hdfree`
      }
      if (!is.null(self$`qs_bits`)) {
        QuickserverServiceMasterObject[["qs_bits"]] <-
          self$`qs_bits`
      }
      if (!is.null(self$`qs_load`)) {
        QuickserverServiceMasterObject[["qs_load"]] <-
          self$`qs_load`
      }
      if (!is.null(self$`qs_ram`)) {
        QuickserverServiceMasterObject[["qs_ram"]] <-
          self$`qs_ram`
      }
      if (!is.null(self$`qs_cpu_model`)) {
        QuickserverServiceMasterObject[["qs_cpu_model"]] <-
          self$`qs_cpu_model`
      }
      if (!is.null(self$`qs_cpu_mhz`)) {
        QuickserverServiceMasterObject[["qs_cpu_mhz"]] <-
          self$`qs_cpu_mhz`
      }
      if (!is.null(self$`qs_location`)) {
        QuickserverServiceMasterObject[["qs_location"]] <-
          self$`qs_location`
      }
      if (!is.null(self$`qs_available`)) {
        QuickserverServiceMasterObject[["qs_available"]] <-
          self$`qs_available`
      }
      if (!is.null(self$`qs_cost`)) {
        QuickserverServiceMasterObject[["qs_cost"]] <-
          self$`qs_cost`
      }
      if (!is.null(self$`qs_last_update`)) {
        QuickserverServiceMasterObject[["qs_last_update"]] <-
          self$`qs_last_update`
      }
      if (!is.null(self$`qs_cores`)) {
        QuickserverServiceMasterObject[["qs_cores"]] <-
          self$`qs_cores`
      }
      if (!is.null(self$`qs_iowait`)) {
        QuickserverServiceMasterObject[["qs_iowait"]] <-
          self$`qs_iowait`
      }
      if (!is.null(self$`qs_raid_status`)) {
        QuickserverServiceMasterObject[["qs_raid_status"]] <-
          self$`qs_raid_status`
      }
      if (!is.null(self$`qs_drive_type`)) {
        QuickserverServiceMasterObject[["qs_drive_type"]] <-
          self$`qs_drive_type`
      }
      if (!is.null(self$`qs_order`)) {
        QuickserverServiceMasterObject[["qs_order"]] <-
          self$`qs_order`
      }
      if (!is.null(self$`qs_raid_building`)) {
        QuickserverServiceMasterObject[["qs_raid_building"]] <-
          self$`qs_raid_building`
      }
      if (!is.null(self$`qs_kernel`)) {
        QuickserverServiceMasterObject[["qs_kernel"]] <-
          self$`qs_kernel`
      }
      if (!is.null(self$`qs_ioping`)) {
        QuickserverServiceMasterObject[["qs_ioping"]] <-
          self$`qs_ioping`
      }
      if (!is.null(self$`qs_speed`)) {
        QuickserverServiceMasterObject[["qs_speed"]] <-
          self$`qs_speed`
      }
      if (!is.null(self$`qs_distro`)) {
        QuickserverServiceMasterObject[["qs_distro"]] <-
          self$`qs_distro`
      }
      if (!is.null(self$`qs_distro_version`)) {
        QuickserverServiceMasterObject[["qs_distro_version"]] <-
          self$`qs_distro_version`
      }
      if (!is.null(self$`qs_bytes_sec_in`)) {
        QuickserverServiceMasterObject[["qs_bytes_sec_in"]] <-
          self$`qs_bytes_sec_in`
      }
      if (!is.null(self$`qs_bytes_sec_out`)) {
        QuickserverServiceMasterObject[["qs_bytes_sec_out"]] <-
          self$`qs_bytes_sec_out`
      }
      if (!is.null(self$`qs_packets_sec_in`)) {
        QuickserverServiceMasterObject[["qs_packets_sec_in"]] <-
          self$`qs_packets_sec_in`
      }
      if (!is.null(self$`qs_packets_sec_out`)) {
        QuickserverServiceMasterObject[["qs_packets_sec_out"]] <-
          self$`qs_packets_sec_out`
      }
      if (!is.null(self$`qs_last_install_time`)) {
        QuickserverServiceMasterObject[["qs_last_install_time"]] <-
          self$extractSimpleType(self$`qs_last_install_time`)
      }
      if (!is.null(self$`qs_partitions`)) {
        QuickserverServiceMasterObject[["qs_partitions"]] <-
          self$extractSimpleType(self$`qs_partitions`)
      }
      if (!is.null(self$`qs_cpu_flags`)) {
        QuickserverServiceMasterObject[["qs_cpu_flags"]] <-
          self$`qs_cpu_flags`
      }
      return(QuickserverServiceMasterObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverServiceMaster
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverServiceMaster
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`qs_id`)) {
        self$`qs_id` <- this_object$`qs_id`
      }
      if (!is.null(this_object$`qs_name`)) {
        self$`qs_name` <- this_object$`qs_name`
      }
      if (!is.null(this_object$`qs_ip`)) {
        self$`qs_ip` <- this_object$`qs_ip`
      }
      if (!is.null(this_object$`qs_type`)) {
        self$`qs_type` <- this_object$`qs_type`
      }
      if (!is.null(this_object$`qs_hdsize`)) {
        self$`qs_hdsize` <- this_object$`qs_hdsize`
      }
      if (!is.null(this_object$`qs_hdfree`)) {
        self$`qs_hdfree` <- this_object$`qs_hdfree`
      }
      if (!is.null(this_object$`qs_bits`)) {
        self$`qs_bits` <- this_object$`qs_bits`
      }
      if (!is.null(this_object$`qs_load`)) {
        self$`qs_load` <- this_object$`qs_load`
      }
      if (!is.null(this_object$`qs_ram`)) {
        self$`qs_ram` <- this_object$`qs_ram`
      }
      if (!is.null(this_object$`qs_cpu_model`)) {
        self$`qs_cpu_model` <- this_object$`qs_cpu_model`
      }
      if (!is.null(this_object$`qs_cpu_mhz`)) {
        self$`qs_cpu_mhz` <- this_object$`qs_cpu_mhz`
      }
      if (!is.null(this_object$`qs_location`)) {
        self$`qs_location` <- this_object$`qs_location`
      }
      if (!is.null(this_object$`qs_available`)) {
        self$`qs_available` <- this_object$`qs_available`
      }
      if (!is.null(this_object$`qs_cost`)) {
        self$`qs_cost` <- this_object$`qs_cost`
      }
      if (!is.null(this_object$`qs_last_update`)) {
        self$`qs_last_update` <- this_object$`qs_last_update`
      }
      if (!is.null(this_object$`qs_cores`)) {
        self$`qs_cores` <- this_object$`qs_cores`
      }
      if (!is.null(this_object$`qs_iowait`)) {
        self$`qs_iowait` <- this_object$`qs_iowait`
      }
      if (!is.null(this_object$`qs_raid_status`)) {
        self$`qs_raid_status` <- this_object$`qs_raid_status`
      }
      if (!is.null(this_object$`qs_drive_type`)) {
        self$`qs_drive_type` <- this_object$`qs_drive_type`
      }
      if (!is.null(this_object$`qs_order`)) {
        self$`qs_order` <- this_object$`qs_order`
      }
      if (!is.null(this_object$`qs_raid_building`)) {
        self$`qs_raid_building` <- this_object$`qs_raid_building`
      }
      if (!is.null(this_object$`qs_kernel`)) {
        self$`qs_kernel` <- this_object$`qs_kernel`
      }
      if (!is.null(this_object$`qs_ioping`)) {
        self$`qs_ioping` <- this_object$`qs_ioping`
      }
      if (!is.null(this_object$`qs_speed`)) {
        self$`qs_speed` <- this_object$`qs_speed`
      }
      if (!is.null(this_object$`qs_distro`)) {
        self$`qs_distro` <- this_object$`qs_distro`
      }
      if (!is.null(this_object$`qs_distro_version`)) {
        self$`qs_distro_version` <- this_object$`qs_distro_version`
      }
      if (!is.null(this_object$`qs_bytes_sec_in`)) {
        self$`qs_bytes_sec_in` <- this_object$`qs_bytes_sec_in`
      }
      if (!is.null(this_object$`qs_bytes_sec_out`)) {
        self$`qs_bytes_sec_out` <- this_object$`qs_bytes_sec_out`
      }
      if (!is.null(this_object$`qs_packets_sec_in`)) {
        self$`qs_packets_sec_in` <- this_object$`qs_packets_sec_in`
      }
      if (!is.null(this_object$`qs_packets_sec_out`)) {
        self$`qs_packets_sec_out` <- this_object$`qs_packets_sec_out`
      }
      if (!is.null(this_object$`qs_last_install_time`)) {
        `qs_last_install_time_object` <- AnyType$new()
        `qs_last_install_time_object`$fromJSON(jsonlite::toJSON(this_object$`qs_last_install_time`, auto_unbox = TRUE, digits = NA))
        self$`qs_last_install_time` <- `qs_last_install_time_object`
      }
      if (!is.null(this_object$`qs_partitions`)) {
        `qs_partitions_object` <- AnyType$new()
        `qs_partitions_object`$fromJSON(jsonlite::toJSON(this_object$`qs_partitions`, auto_unbox = TRUE, digits = NA))
        self$`qs_partitions` <- `qs_partitions_object`
      }
      if (!is.null(this_object$`qs_cpu_flags`)) {
        self$`qs_cpu_flags` <- this_object$`qs_cpu_flags`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverServiceMaster in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverServiceMaster
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverServiceMaster
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`qs_id` <- this_object$`qs_id`
      self$`qs_name` <- this_object$`qs_name`
      self$`qs_ip` <- this_object$`qs_ip`
      self$`qs_type` <- this_object$`qs_type`
      self$`qs_hdsize` <- this_object$`qs_hdsize`
      self$`qs_hdfree` <- this_object$`qs_hdfree`
      self$`qs_bits` <- this_object$`qs_bits`
      self$`qs_load` <- this_object$`qs_load`
      self$`qs_ram` <- this_object$`qs_ram`
      self$`qs_cpu_model` <- this_object$`qs_cpu_model`
      self$`qs_cpu_mhz` <- this_object$`qs_cpu_mhz`
      self$`qs_location` <- this_object$`qs_location`
      self$`qs_available` <- this_object$`qs_available`
      self$`qs_cost` <- this_object$`qs_cost`
      self$`qs_last_update` <- this_object$`qs_last_update`
      self$`qs_cores` <- this_object$`qs_cores`
      self$`qs_iowait` <- this_object$`qs_iowait`
      self$`qs_raid_status` <- this_object$`qs_raid_status`
      self$`qs_drive_type` <- this_object$`qs_drive_type`
      self$`qs_order` <- this_object$`qs_order`
      self$`qs_raid_building` <- this_object$`qs_raid_building`
      self$`qs_kernel` <- this_object$`qs_kernel`
      self$`qs_ioping` <- this_object$`qs_ioping`
      self$`qs_speed` <- this_object$`qs_speed`
      self$`qs_distro` <- this_object$`qs_distro`
      self$`qs_distro_version` <- this_object$`qs_distro_version`
      self$`qs_bytes_sec_in` <- this_object$`qs_bytes_sec_in`
      self$`qs_bytes_sec_out` <- this_object$`qs_bytes_sec_out`
      self$`qs_packets_sec_in` <- this_object$`qs_packets_sec_in`
      self$`qs_packets_sec_out` <- this_object$`qs_packets_sec_out`
      self$`qs_last_install_time` <- AnyType$new()$fromJSON(jsonlite::toJSON(this_object$`qs_last_install_time`, auto_unbox = TRUE, digits = NA))
      self$`qs_partitions` <- AnyType$new()$fromJSON(jsonlite::toJSON(this_object$`qs_partitions`, auto_unbox = TRUE, digits = NA))
      self$`qs_cpu_flags` <- this_object$`qs_cpu_flags`
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverServiceMaster and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverServiceMaster
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
# QuickserverServiceMaster$unlock()
#
## Below is an example to define the print function
# QuickserverServiceMaster$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverServiceMaster$lock()

