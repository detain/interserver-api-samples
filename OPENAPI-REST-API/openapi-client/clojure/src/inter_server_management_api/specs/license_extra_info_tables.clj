(ns inter-server-management-api.specs.license-extra-info-tables
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.license-ip-info :refer :all]
            )
  (:import (java.io File)))


(def license-extra-info-tables-data
  {
   (ds/opt :ip_info) license-ip-info-spec
   })

(def license-extra-info-tables-spec
  (ds/spec
    {:name ::license-extra-info-tables
     :spec license-extra-info-tables-data}))
