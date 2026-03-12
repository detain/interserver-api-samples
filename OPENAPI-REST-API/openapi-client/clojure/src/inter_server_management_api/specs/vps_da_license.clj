(ns inter-server-management-api.specs.vps-da-license
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-da-license-data
  {
   (ds/opt :name) string?
   (ds/opt :sub_name) string?
   (ds/opt :cost) int?
   (ds/opt :img_disabled) string?
   (ds/opt :img_active) string?
   })

(def vps-da-license-spec
  (ds/spec
    {:name ::vps-da-license
     :spec vps-da-license-data}))
