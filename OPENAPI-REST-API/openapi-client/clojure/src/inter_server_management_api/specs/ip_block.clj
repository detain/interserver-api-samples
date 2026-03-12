(ns inter-server-management-api.specs.ip-block
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ip-block-data
  {
   (ds/opt :id) int?
   (ds/opt :short_desc) string?
   (ds/opt :qty) string?
   (ds/opt :monthly_price) float?
   })

(def ip-block-spec
  (ds/spec
    {:name ::ip-block
     :spec ip-block-data}))
