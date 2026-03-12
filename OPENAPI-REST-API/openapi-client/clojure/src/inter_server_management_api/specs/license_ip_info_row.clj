(ns inter-server-management-api.specs.license-ip-info-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def license-ip-info-row-data
  {
   (ds/opt :desc) string?
   (ds/opt :value) string?
   })

(def license-ip-info-row-spec
  (ds/spec
    {:name ::license-ip-info-row
     :spec license-ip-info-row-data}))
