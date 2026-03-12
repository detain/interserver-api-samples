(ns inter-server-management-api.specs.license-ip-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.license-ip-info-row :refer :all]
            )
  (:import (java.io File)))


(def license-ip-info-data
  {
   (ds/opt :title) string?
   (ds/opt :rows) (s/coll-of license-ip-info-row-spec)
   })

(def license-ip-info-spec
  (ds/spec
    {:name ::license-ip-info
     :spec license-ip-info-data}))
