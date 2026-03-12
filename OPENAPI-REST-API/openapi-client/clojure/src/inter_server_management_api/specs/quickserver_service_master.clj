(ns inter-server-management-api.specs.quickserver-service-master
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs. :refer :all]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def quickserver-service-master-data
  {
   (ds/opt :qs_id) string?
   (ds/opt :qs_name) string?
   (ds/opt :qs_ip) string?
   (ds/opt :qs_type) string?
   (ds/opt :qs_hdsize) string?
   (ds/opt :qs_hdfree) string?
   (ds/opt :qs_bits) string?
   (ds/opt :qs_load) string?
   (ds/opt :qs_ram) string?
   (ds/opt :qs_cpu_model) string?
   (ds/opt :qs_cpu_mhz) string?
   (ds/opt :qs_location) string?
   (ds/opt :qs_available) string?
   (ds/opt :qs_cost) string?
   (ds/opt :qs_last_update) string?
   (ds/opt :qs_cores) string?
   (ds/opt :qs_iowait) string?
   (ds/opt :qs_raid_status) string?
   (ds/opt :qs_drive_type) string?
   (ds/opt :qs_order) string?
   (ds/opt :qs_raid_building) string?
   (ds/opt :qs_kernel) string?
   (ds/opt :qs_ioping) string?
   (ds/opt :qs_speed) string?
   (ds/opt :qs_distro) string?
   (ds/opt :qs_distro_version) string?
   (ds/opt :qs_bytes_sec_in) string?
   (ds/opt :qs_bytes_sec_out) string?
   (ds/opt :qs_packets_sec_in) string?
   (ds/opt :qs_packets_sec_out) string?
   (ds/opt :qs_last_install_time) any-type-spec
   (ds/opt :qs_partitions) any-type-spec
   (ds/opt :qs_cpu_flags) string?
   })

(def quickserver-service-master-spec
  (ds/spec
    {:name ::quickserver-service-master
     :spec quickserver-service-master-data}))
