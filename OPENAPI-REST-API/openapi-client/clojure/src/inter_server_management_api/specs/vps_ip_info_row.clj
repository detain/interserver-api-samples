(ns inter-server-management-api.specs.vps-ip-info-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-ip-info-row-data
  {
   (ds/opt :desc) string?
   (ds/opt :value) string?
   })

(def vps-ip-info-row-spec
  (ds/spec
    {:name ::vps-ip-info-row
     :spec vps-ip-info-row-data}))
