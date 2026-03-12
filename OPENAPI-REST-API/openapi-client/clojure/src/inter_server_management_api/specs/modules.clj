(ns inter-server-management-api.specs.modules
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def modules-data
  {
   })

(def modules-spec
  (ds/spec
    {:name ::modules
     :spec modules-data}))
