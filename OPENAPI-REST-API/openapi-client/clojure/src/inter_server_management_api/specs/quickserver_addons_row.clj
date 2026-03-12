(ns inter-server-management-api.specs.quickserver-addons-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def quickserver-addons-row-data
  {
   (ds/opt :desc) string?
   (ds/opt :value) string?
   })

(def quickserver-addons-row-spec
  (ds/spec
    {:name ::quickserver-addons-row
     :spec quickserver-addons-row-data}))
