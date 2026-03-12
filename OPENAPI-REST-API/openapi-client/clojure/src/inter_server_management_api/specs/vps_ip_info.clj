(ns inter-server-management-api.specs.vps-ip-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-ip-info-row :refer :all]
            )
  (:import (java.io File)))


(def vps-ip-info-data
  {
   (ds/opt :title) string?
   (ds/opt :rows) (s/coll-of vps-ip-info-row-spec)
   })

(def vps-ip-info-spec
  (ds/spec
    {:name ::vps-ip-info
     :spec vps-ip-info-data}))
