
from sklearn.tree import DecisionTreeClassifier

def predict(data):
    model = DecisionTreeClassifier()
    X = [[0, 0], [1, 1]]
    y = [0, 1]
    model.fit(X, y)
    return model.predict(data)
