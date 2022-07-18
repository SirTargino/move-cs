using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    //criando com o transform
    public float speed = 5;
    //Criando com o rigidbody
    Rigidbody rb;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        //Utilizando os comportamentos do Transform
        /*float horizontal = Input.GetA
transform.Translate(direction * speed * Time.deltaTime);*/
        //Utilizando os comportamentos com o Rigidbody
        float horizontal = Input.GetAxis("Horizontal");
        float vertical = Input.GetAxis("Vertical");

        Vector3 direction = new Vector3(horizontal, 0 ,vertical);

        //rb.MovePosition(transform.position + direction * speed * Time.deltaTime);
        //rb.velocity = direction * speed;
        //Trabalha melhor com a gravidade
   
//rb.velocity = new Vector3(horizontal * speed, rb.velocity.y, vertical * speed);
        rb.AddForce(direction * speed);


    }
}
