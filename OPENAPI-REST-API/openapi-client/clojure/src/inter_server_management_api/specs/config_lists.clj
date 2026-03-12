(ns inter-server-management-api.specs.config-lists
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.cpu :refer :all]
            [inter-server-management-api.specs.bandwidth :refer :all]
            [inter-server-management-api.specs.ip-block :refer :all]
            [inter-server-management-api.specs.operating-system :refer :all]
            [inter-server-management-api.specs.control-panel :refer :all]
            [inter-server-management-api.specs.raid-option :refer :all]
            )
  (:import (java.io File)))


(def config-lists-data
  {
   (ds/opt :cpu_li) (s/map-of string? cpu-spec)
   (ds/opt :memory_li) (s/map-of string? (s/map-of string? memory-option-spec))
   (ds/opt :hd_li) (s/map-of string? (s/map-of string? hard-drive-spec))
   (ds/opt :bandwidth_li) (s/map-of string? bandwidth-spec)
   (ds/opt :ips_li) (s/map-of string? ip-block-spec)
   (ds/opt :os_li) (s/map-of string? operating-system-spec)
   (ds/opt :cp_li) (s/map-of string? control-panel-spec)
   (ds/opt :raid_li) (s/coll-of raid-option-spec)
   })

(def config-lists-spec
  (ds/spec
    {:name ::config-lists
     :spec config-lists-data}))
