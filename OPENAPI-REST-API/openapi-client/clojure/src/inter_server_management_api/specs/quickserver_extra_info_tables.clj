(ns inter-server-management-api.specs.quickserver-extra-info-tables
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.quickserver-ip-info :refer :all]
            [inter-server-management-api.specs.quickserver-addons :refer :all]
            )
  (:import (java.io File)))


(def quickserver-extra-info-tables-data
  {
   (ds/opt :ip_info) quickserver-ip-info-spec
   (ds/opt :addons) quickserver-addons-spec
   })

(def quickserver-extra-info-tables-spec
  (ds/spec
    {:name ::quickserver-extra-info-tables
     :spec quickserver-extra-info-tables-data}))
