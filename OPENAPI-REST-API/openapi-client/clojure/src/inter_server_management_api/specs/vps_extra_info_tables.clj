(ns inter-server-management-api.specs.vps-extra-info-tables
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-ip-info :refer :all]
            )
  (:import (java.io File)))


(def vps-extra-info-tables-data
  {
   (ds/opt :ip_info) vps-ip-info-spec
   })

(def vps-extra-info-tables-spec
  (ds/spec
    {:name ::vps-extra-info-tables
     :spec vps-extra-info-tables-data}))
